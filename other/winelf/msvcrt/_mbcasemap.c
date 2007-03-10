#include "msvcrt.h"
void _elfimplib__mbcasemap() asm("mbcasemap");
void *_imp___mbcasemap = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcasemap() {
load_dll_msvcrt();
_imp___mbcasemap = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcasemap");
}
void _elfimplib__mbcasemap() {
asm("leave\njmp *%0" : : "r"(_imp___mbcasemap));
}

void _elfimplibmang__mbcasemap() asm("_mbcasemap");
void _elfimplibmang__mbcasemap() {
asm("leave\njmp *%0" : : "r"(_imp___mbcasemap));
}

