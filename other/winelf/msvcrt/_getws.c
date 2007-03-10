#include "msvcrt.h"
void _elfimplib__getws() asm("getws");
void *_imp___getws = NULL;
__attribute__((constructor)) void _elfimplib_init__getws() {
load_dll_msvcrt();
_imp___getws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getws");
}
void _elfimplib__getws() {
asm("leave\njmp *%0" : : "r"(_imp___getws));
}

void _elfimplibmang__getws() asm("_getws");
void _elfimplibmang__getws() {
asm("leave\njmp *%0" : : "r"(_imp___getws));
}

