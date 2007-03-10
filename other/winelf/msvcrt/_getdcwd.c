#include "msvcrt.h"
void _elfimplib__getdcwd() asm("getdcwd");
void *_imp___getdcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__getdcwd() {
load_dll_msvcrt();
_imp___getdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdcwd");
}
void _elfimplib__getdcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getdcwd));
}

void _elfimplibmang__getdcwd() asm("_getdcwd");
void _elfimplibmang__getdcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getdcwd));
}

