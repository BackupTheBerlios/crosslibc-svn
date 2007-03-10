#include "msvcrt.h"
void _elfimplib___crtLCMapStringA() asm("_crtLCMapStringA");
void *_imp____crtLCMapStringA = NULL;
__attribute__((constructor)) void _elfimplib_init___crtLCMapStringA() {
load_dll_msvcrt();
_imp____crtLCMapStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringA");
}
void _elfimplib___crtLCMapStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringA));
}

void _elfimplibmang___crtLCMapStringA() asm("__crtLCMapStringA");
void _elfimplibmang___crtLCMapStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringA));
}

