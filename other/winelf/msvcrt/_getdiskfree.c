#include "msvcrt.h"
void _elfimplib__getdiskfree() asm("getdiskfree");
void *_imp___getdiskfree = NULL;
__attribute__((constructor)) void _elfimplib_init__getdiskfree() {
load_dll_msvcrt();
_imp___getdiskfree = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdiskfree");
}
void _elfimplib__getdiskfree() {
asm("leave\njmp *%0" : : "r"(_imp___getdiskfree));
}

void _elfimplibmang__getdiskfree() asm("_getdiskfree");
void _elfimplibmang__getdiskfree() {
asm("leave\njmp *%0" : : "r"(_imp___getdiskfree));
}

