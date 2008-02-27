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
    char *objdumpcmd, *unmangled, *defobjdump;
    FILE *objdump, *cfile;
#define LINELEN 1024
    char line[LINELEN + 1];
#define FNAMELEN 1024
    char fname[FNAMELEN + 1];
    int llen, i;
    
    line[LINELEN] = '\0';
    fname[FNAMELEN] = '\0';
    
    if (argc < 3) {
        fprintf(stderr, "Use: elfimplib <.dll file> <short name> [objdump]\n");
        return 1;
    }
    
    /* if objdump was not provided, assume "objdump" */
    defobjdump = "objdump";
    if (argc >= 4) {
        defobjdump = argv[3];
    }
    
    /* get the objdump command */
    objdumpcmd = (char *) malloc(strlen(defobjdump) + strlen(argv[1]) + 5);
    sprintf(objdumpcmd, "%s -p %s", defobjdump, argv[1]);
    
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
    
    /* start writing out the file */
    mkdir(argv[2], 0755);
    snprintf(fname, FNAMELEN, "%s/%s.c", argv[2], argv[2]);
    cfile = fopen(fname, "w");
    if (!cfile) {
        perror(fname);
        return 1;
    }
    
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

        /* unmangle c-decl functions */
        unmangled = line;
        if (unmangled[0] == '_') unmangled++;
        
        /* write out the loader */
        fprintf(cfile, "#ifndef %s_linked\n"
                "#define %s_linked\n"
                "void %s() {}\n"
                "#endif\n", unmangled, unmangled, unmangled);

        /* and if it was mangled, write an original one too */
        if (unmangled != line) {
            fprintf(cfile, "#ifndef %s_linked\n"
                    "#define %s_linked\n"
                    "void %s() {}\n"
                    "#endif\n", line, line, line);
        }
    }
    
    pclose(objdump);

    fclose(cfile);
    
    /* generate a useful Makefile */
    snprintf(fname, FNAMELEN, "%s/Makefile", argv[2]);
    cfile = fopen(fname, "w");
    if (!cfile) {
        perror(fname);
        return 1;
    }
    fprintf(cfile, "CROSS=i686-win32elf-\n"
            "CC=$(CROSS)gcc\n"
            "LD=$(CROSS)ld\n"
            "CFLAGS=-fPIC\n"
            "LDFLAGS=-shared -soname=libhost_%s.dll\n"
            "\n"
            "all: lib%s.so\n"
            "\n"
            "lib%s.so:\n"
            "\t$(CC) $(CFLAGS) -c %s.c -o %s.o\n"
            "\t$(LD) $(LDFLAGS) %s.o -o lib%s.so\n",
            argv[2], argv[2], argv[2], argv[2], argv[2],
            argv[2], argv[2]);
    fclose(cfile);
    
    return 0;
}
