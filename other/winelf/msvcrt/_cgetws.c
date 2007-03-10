#include "msvcrt.h"
void _elfimplib__cgetws() asm("cgetws");
void *_imp___cgetws = NULL;
__attribute__((constructor)) void _elfimplib_init__cgetws() {
load_dll_msvcrt();
_imp___cgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgetws");
}
void _elfimplib__cgetws() {
asm("leave\njmp *%0" : : "r"(_imp___cgetws));
}

void _elfimplibmang__cgetws() asm("_cgetws");
void _elfimplibmang__cgetws() {
asm("leave\njmp *%0" : : "r"(_imp___cgetws));
}

