#include "msvcrt.h"
void _elfimplib___p__mbctype() asm("_p__mbctype");
void *_imp____p__mbctype = NULL;
__attribute__((constructor)) void _elfimplib_init___p__mbctype() {
load_dll_msvcrt();
_imp____p__mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__mbctype");
}
void _elfimplib___p__mbctype() {
asm("leave\njmp *%0" : : "r"(_imp____p__mbctype));
}

