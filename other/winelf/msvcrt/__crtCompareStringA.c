#include "msvcrt.h"
void _elfimplib___crtCompareStringA() asm("_crtCompareStringA");
void *_imp____crtCompareStringA = NULL;
__attribute__((constructor)) void _elfimplib_init___crtCompareStringA() {
load_dll_msvcrt();
_imp____crtCompareStringA = (void *) _elf_GetProcAddress(_dll_msvcrt, "__crtCompareStringA");
}
void _elfimplib___crtCompareStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringA));
}

void _elfimplibmang___crtCompareStringA() asm("__crtCompareStringA");
void _elfimplibmang___crtCompareStringA() {
asm("leave\njmp *%0" : : "r"(_imp____crtCompareStringA));
}

