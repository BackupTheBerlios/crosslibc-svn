/*
 * Copyright (c) 2007  Gregor Richards
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *objdumpcmd, *unmangled;
    FILE *objdump, *cfile;
#define LINELEN 1024
    char line[LINELEN + 1];
#define FNAMELEN 1024
    char fname[FNAMELEN + 1];
    int llen, i;
    
    line[LINELEN] = '\0';
    fname[FNAMELEN] = '\0';
    
    if (argc != 3) {
        fprintf(stderr, "Use: elfimplib <.dll file> <short name>\n");
        return 1;
    }
    
    /* get the objdump command */
    objdumpcmd = (char *) malloc(strlen(argv[1]) + 25);
    sprintf(objdumpcmd, "i686-mingw32-objdump -p %s", argv[1]);
    
    /* popen it */
    objdump = popen(objdumpcmd, "r");
    if (!objdump) {
        perror("popen");
        return 1;
    }
    
    /* read until we start getting the right data */
    while (!feof(objdump) && !ferror(objdump)) {
        if (!fgets(line, LINELEN, objdump)) {
            continue;
        }
        
        if (!strncmp("[Ordinal/Name Pointer] Table", line, 28)) {
            /* ready to continue reading, break */
            break;
        }
    }
    
    /* write out the main file */
    mkdir(argv[2], 0755);
    snprintf(fname, FNAMELEN, "%s/dll_%s.c", argv[2], argv[2]);
    cfile = fopen(fname, "w");
    if (!cfile) {
        perror(fname);
        return 1;
    }
    fprintf(cfile, "#ifndef WIN32_LEAN_AND_MEAN\n"
            "#define WIN32_LEAN_AND_MEAN\n"
            "#endif\n"
            "#include <windows.h>\n"
            "\n"
            "extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);\n"
            "extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);\n"
            "\n"
            "HMODULE _dll_%s = NULL;\n"
            "\n"
            "void load_dll_%s() {\n"
            "if (!_dll_%s) {\n"
            "_dll_%s = _elf_LoadLibraryA(\"%s\");\n"
            "}\n"
            "}\n"
            "\n",
            argv[2], argv[2], argv[2], argv[2], argv[2]);
    fclose(cfile);
    
    /* write out the header file */
    snprintf(fname, FNAMELEN, "%s/%s.h", argv[2], argv[2]);
    cfile = fopen(fname, "w");
    if (!cfile) {
        perror(fname);
        return 1;
    }
    fprintf(cfile, "#ifndef WIN32_LEAN_AND_MEAN\n"
            "#define WIN32_LEAN_AND_MEAN\n"
            "#endif\n"
            "#include <windows.h>\n"
            "\n"
            "extern WINBASEAPI HMODULE WINAPI (*_elf_LoadLibraryA)(LPCSTR);\n"
            "extern WINBASEAPI FARPROC WINAPI (*_elf_GetProcAddress)(HMODULE,LPCSTR);\n"
            "\n"
            "extern HMODULE _dll_%s;\n"
            "\n"
            "void load_dll_%s();\n",
            argv[2], argv[2]);
    
    /* read in the symbols */
    while (!feof(objdump) && !ferror(objdump)) {
        if (!fgets(line, LINELEN, objdump)) {
            continue;
        }
        
        llen = strlen(line);
        
        while (llen > 0 &&
               line[llen - 1] == '\n' ||
               line[llen - 1] == '\r') {
            llen--;
            line[llen] = '\0';
        }
        
        if (llen < 2) {
            /* done reading */
            break;
        }
        
        if (llen <= 8) {
            continue;
        }
        
        memmove(line, line + 8, llen - 7);
        llen -= 8;
        
        /* check for sane names */
        for (i = 0; i < llen; i++) {
            if ((line[i] < 'A' || line[i] > 'Z') &&
                (line[i] < 'a' || line[i] > 'z') &&
                (line[i] < '0' || line[i] > '9') &&
                (line[i] != '_')) break;
        }
        if (i < llen) continue;
        
        /* if it starts with '_', it's probably just C-mangled */
        if (line[0] == '_') {
            unmangled = line + 1;
        } else {
            unmangled = line;
        }
        
        /* write out the loader */
        snprintf(fname, FNAMELEN, "%s/%s.c", argv[2], line);
        cfile = fopen(fname, "w");
        if (!cfile) {
            perror(fname);
            return 1;
        }
        fprintf(cfile, "#include \"%s.h\"\n"
                "void _elfimplib_%s() asm(\"%s\");\n"
                "void *_imp__%s = NULL;\n"
                "__attribute__((constructor)) void _elfimplib_init_%s() {\n"
                "load_dll_%s();\n"
                "_imp__%s = (void *) _elf_GetProcAddress(_dll_%s, \"%s\");\n"
                "}\n"
                "void _elfimplib_%s() {\n"
                "asm(\"leave\\njmp *%0\" : : \"r\"(_imp__%s));\n"
                "}\n"
                "\n",
                argv[2], line, unmangled, line, line, argv[2], line, argv[2],
                line, line, line);
        fclose(cfile);
    }
    
    pclose(objdump);
    
    /* generate a useful Makefile */
    snprintf(fname, FNAMELEN, "%s/Makefile", argv[2]);
    cfile = fopen(fname, "w");
    if (!cfile) {
        perror(fname);
        return 1;
    }
    fprintf(cfile, "CC=i686-win32elf-gcc\n"
            "CFLAGS=\n"
            "AR=i686-win32elf-ar\n"
            "RANLIB=i686-win32elf-ranlib\n"
            "all: lib%s.a\n"
            "\n"
            "lib%s.a:\n"
            "\t$CC $CFLAGS -c *.c\n"
            "\t$AR rc lib%s.a *.o\n"
            "\t$RANLIB lib%s.a\n",
            argv[2], argv[2], argv[2], argv[2]);
    fclose(cfile);
    
    return 0;
}
