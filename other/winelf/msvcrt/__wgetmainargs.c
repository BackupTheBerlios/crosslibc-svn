#include "msvcrt.h"
void _elfimplib___wgetmainargs() asm("_wgetmainargs");
void *_imp____wgetmainargs = NULL;
__attribute__((constructor)) void _elfimplib_init___wgetmainargs() {
load_dll_msvcrt();
_imp____wgetmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__wgetmainargs");
}
void _elfimplib___wgetmainargs() {
asm("leave\njmp *%0" : : "r"(_imp____wgetmainargs));
}

