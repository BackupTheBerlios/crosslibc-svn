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
    int llen, i;
    
    line[LINELEN] = '\0';
    
    if (argc != 4) {
        fprintf(stderr, "Use: elfimplib <.dll file> <short name> <.c file>\n");
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
    
    /* prepare to write out the symbols */
    cfile = fopen(argv[3], "w");
    if (!cfile) {
        perror(argv[3]);
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
        for (i = 8; i < llen; i++) {
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
        
        /* check for functions that need to be ignored */
        if (!strcmp(line, "LoadLibraryA") ||
            !strcmp(line, "GetModuleHandleA") ||
            !strcmp(line, "GetProcAddress"))
            continue;
        
        /* write out the loader */
        fprintf(cfile, "void _elf_%s() asm(\"%s\");\n"
                "void *_imp__%s = NULL;\n"
                "void _elf_%s() {\n"
                "load_dll_%s();\n"
                "if (!_imp__%s) {\n"
                "_imp__%s = (void *) _elf_GetProcAddress(_dll_%s, \"%s\");\n"
                "}\n"
                "asm(\"leave\\njmp *%0\" : : \"r\"(_imp__%s));\n"
                "}\n"
                "\n",
                line, unmangled, line, line, argv[2], line,
                line, argv[2], line, line);
    }
    
    fclose(cfile);
    pclose(objdump);
    
    return 0;
}
