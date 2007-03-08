#include "msvcrt.h"
void _elfimplib___crtLCMapStringW() asm("_crtLCMapStringW");
void *_imp____crtLCMapStringW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtLCMapStringW() {
load_dll_msvcrt();
_imp____crtLCMapStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtLCMapStringW");
}
void _elfimplib___crtLCMapStringW() {
asm("leave\njmp *%0" : : "r"(_imp____crtLCMapStringW));
}

