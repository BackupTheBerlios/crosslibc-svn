#include "msvcrt.h"
void _elfimplib___p__mbcasemap() asm("_p__mbcasemap");
void *_imp____p__mbcasemap = NULL;
__attribute__((constructor)) void _elfimplib_init___p__mbcasemap() {
load_dll_msvcrt();
_imp____p__mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbcasemap");
}
void _elfimplib___p__mbcasemap() {
asm("leave\njmp *%0" : : "r"(_imp____p__mbcasemap));
}

