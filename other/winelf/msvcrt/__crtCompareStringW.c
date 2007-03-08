#include "msvcrt.h"
void _elfimplib___crtCompareStringW() asm("_crtCompareStringW");
void *_imp____crtCompareStringW = NULL;
__attribute__((constructor)) void _elfimplib_init___crtCompareStringW() {
load_dll_msvcrt();
_imp____crtCompareStringW = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringW");
}
void _elfimplib___crtCompareStringW() {
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringW));
}

