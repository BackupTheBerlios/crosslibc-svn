#include "msvcrt.h"
void _elfimplib___p__iob() asm("_p__iob");
void *_imp____p__iob = NULL;
__attribute__((constructor)) void _elfimplib_init___p__iob() {
load_dll_msvcrt();
_imp____p__iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__iob");
}
void _elfimplib___p__iob() {
asm("leave\njmp *%0" : : "r"(_imp____p__iob));
}

