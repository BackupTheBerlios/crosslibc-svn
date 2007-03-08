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
    char *specscommand;
    FILE *dumpspecs, *specs;
    
#define LINELEN 10240
    char line[LINELEN + 1];
#define CMDLEN 1024
    char cmd[CMDLEN + 1];
    
    line[LINELEN] = '\0';
    cmd[CMDLEN] = '\0';
    
    if (argc != 2) return 1;
    
    /* start reading in the spec file */
    snprintf(cmd, CMDLEN, "%s-gcc -dumpspecs", argv[1]);
    dumpspecs = popen(cmd, "r");
    if (!dumpspecs) {
        perror("popen");
        return 1;
    }
    
    /* start writing the output specs file */
    specs = fopen("specs", "w");
    if (!specs) {
        perror("specs");
        return 1;
    }
    
    /* read until '*endfile:' */
    while (!feof(dumpspecs) && !ferror(dumpspecs)) {
        if (!fgets(line, LINELEN, dumpspecs))
            continue;
        
        fprintf(specs, "%s", line);
        
        if (!strncmp(line, "*endfile:", 9))
            break;
    }
    
    /* the next line has crtn.o */
    fgets(line, LINELEN, dumpspecs);
    fprintf(specs, "crtend.o%%s crtn.o%%s\n");
    
    /* copy out the rest */
    while (!feof(dumpspecs) && !ferror(dumpspecs)) {
        if (!fgets(line, LINELEN, dumpspecs))
            continue;
        
        fprintf(specs, "%s", line);
    }
    
    /* done */
    fclose(specs);
    pclose(dumpspecs);
    
    return 0;
}
