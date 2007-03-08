#include "msvcrt.h"
void _elfimplib___getmainargs() asm("_getmainargs");
void *_imp____getmainargs = NULL;
__attribute__((constructor)) void _elfimplib_init___getmainargs() {
load_dll_msvcrt();
_imp____getmainargs = (void *) _elf_GetProcAddress(_dll_msvcrt, "__getmainargs");
}
void _elfimplib___getmainargs() {
asm("leave\njmp *%0" : : "r"(_imp____getmainargs));
}

