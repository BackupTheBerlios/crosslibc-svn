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

/* Functions made available via the ELF loader */
void *_elf_LoadLibraryA, *_elf_GetModuleHandleA, *_elf_GetProcAddress;

void fromPseudoHex(unsigned char *c, unsigned char h[2])
{
    *c = ((h[0] - 'A') << 4) + (h[1] - 'A');
}

void ptrFromPseudoHex(void **ptr, unsigned char *out)
{
    int i;
    union {
        void *vptr;
        unsigned char cbuf[sizeof(void *)];
    } view;
    
    for (i = 0; i < sizeof(void *); i++) {
        fromPseudoHex(view.cbuf + i, out + (i * 2));
    }
    
    *ptr = view.vptr;
}

int main(int, char **, char **);

/* non-libc string comparison */
int _winelf_strnmatch(char *a, char *b, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

/* _winelf_callmain: Arrange arguments appropriately and call main */
int _winelf_callmain(int argc)
{
    char **argv, **envp;
    int i;
    
    void *pargc = &argc;
    argv = pargc + sizeof(void *);
    envp = pargc + sizeof(void *) + (argc+1) * sizeof(char *);
    
    /* load in functions from env */
    _elf_LoadLibraryA = (void *) 0;
    _elf_GetModuleHandleA = (void *) 0;
    _elf_GetProcAddress = (void *) 0;
    for (i = 0; envp[i]; i++) {
        if (_winelf_strnmatch(envp[i], "LOADLIBRARY=", 12)) {
            ptrFromPseudoHex(&_elf_LoadLibraryA, envp[i] + 12);
        } else if (_winelf_strnmatch(envp[i], "GETMODULEHANDLE=", 16)) {
            ptrFromPseudoHex(&_elf_GetModuleHandleA, envp[i] + 16);
        } else if (_winelf_strnmatch(envp[i], "GETPROCADDRESS=", 15)) {
            ptrFromPseudoHex(&_elf_GetProcAddress, envp[i] + 15);
        }
    }
    
    return main(argc, argv, envp);
}
