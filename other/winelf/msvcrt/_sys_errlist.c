#include "msvcrt.h"
void _elfimplib__sys_errlist() asm("sys_errlist");
void *_imp___sys_errlist = NULL;
__attribute__((constructor)) void _elfimplib_init__sys_errlist() {
load_dll_msvcrt();
_imp___sys_errlist = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_errlist");
}
void _elfimplib__sys_errlist() {
asm("leave\njmp *%0" : : "r"(_imp___sys_errlist));
}

void _elfimplibmang__sys_errlist() asm("_sys_errlist");
void _elfimplibmang__sys_errlist() {
asm("leave\njmp *%0" : : "r"(_imp___sys_errlist));
}

