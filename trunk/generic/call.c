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

void OSCALL_determine()
{
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
