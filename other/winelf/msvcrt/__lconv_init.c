#include "msvcrt.h"
void _elfimplib___lconv_init() asm("_lconv_init");
void *_imp____lconv_init = NULL;
__attribute__((constructor)) void _elfimplib_init___lconv_init() {
load_dll_msvcrt();
_imp____lconv_init = (void *) _elf_GetProcAddress(_dll_msvcrt, "__lconv_init");
}
void _elfimplib___lconv_init() {
asm("leave\njmp *%0" : : "r"(_imp____lconv_init));
}

