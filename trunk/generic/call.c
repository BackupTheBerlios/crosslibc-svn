#include "call.h"

int OSCALL_which;

/* OSCALL_regparams():
 * return -1 if syscall params are on the registers, as in Linux
 * return 0 otherwise
 * assumes !OSCALL_solaris */
const char *OSCALL_noex = "/THISFILESHOULDNOTEXIST";
const char *OSCALL_ex = "/";
int OSCALL_regparams()
{
    /* return -1 if params are on the registers, 0 otherwise */
    asm("push %ecx; \
        push %ebx; \
        \
        push $0; \
        push OSCALL_ex; \
        push $0; \
        \
        mov $0, %ecx; \
        mov OSCALL_noex, %ebx; \
        \
        mov $0x21, %eax; \
        int $0x80; \
        \
        add $12, %esp; \
        \
        pop %ebx; \
        pop %ecx;");
}

/* OSCALL_solaris:
 * return 1 if this is Solaris
 * return 0 otherwise * /
void *OSCALL_sidt()
{
    unsigned int ptr[2];
    asm ("sidt (%0)": :"p" (((char *) ptr)+2));
    return (void *) ptr[1];
}
int OSCALL_solaris()
{
    / * return 1 if it's solaris * /
    void *idtr = OSCALL_sidt();
    
    / * the only difference I know is that Solaris' IDTR is quite high, above
     * 0xd0000000 * /
    if (idtr > (void *) 0xd0000000) {
        return 1;
    } else {
        return 0;
    }
}*/
int OSCALL_solaris()
{
    return 0; // needs fixing
}

/* Functions made available via the ELF loader */
void *_elf_LoadLibraryA = (void *) 0;
void *_elf_GetModuleHandleA = (void *) 0;
void *_elf_GetProcAddress = (void *) 0;

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

void OSCALL_determine(int argc)
{
    char **envp;
    int i;
    
    envp = ((void *) &argc) + sizeof(void *) + (argc+1) * sizeof(char *);
    
    /* load in functions from env */
    for (i = 0; envp[i]; i++) {
        if (!strncmp(envp[i], "LOADLIBRARY=", 12)) {
            ptrFromPseudoHex(&_elf_LoadLibraryA, envp[i] + 12);
        } else if (!strncmp(envp[i], "GETMODULEHANDLE=", 16)) {
            ptrFromPseudoHex(&_elf_GetModuleHandleA, envp[i] + 16);
        } else if (!strncmp(envp[i], "GETPROCADDRESS=", 15)) {
            ptrFromPseudoHex(&_elf_GetProcAddress, envp[i] + 15);
        }
    }
    
    if (_elf_LoadLibraryA && _elf_GetModuleHandleA && _elf_GetProcAddress) {
        OSCALL_which = OSCALL_UWIN;
        return;
    }
    
    if (OSCALL_solaris()) {
        OSCALL_which = OSCALL_SOL;
        return;
    }

    if (OSCALL_regparams()) {
        OSCALL_which = OSCALL_LINUX;
    } else {
        OSCALL_which = OSCALL_BSD;
    }
}

int main(int, char **, char **);
/* _xlibc_callmain: Arrange arguments appropriately and call main */
int _xlibc_callmain(int argc)
{
    char **argv, **envp;
    
    void *pargc = &argc;
    argv = pargc + sizeof(void *);
    envp = pargc + sizeof(void *) + (argc+1) * sizeof(char *);

    return main(argc, argv, envp);
}

