#include "msvcrt.h"
void _elfimplib__sys_nerr() asm("sys_nerr");
void *_imp___sys_nerr = NULL;
__attribute__((constructor)) void _elfimplib_init__sys_nerr() {
load_dll_msvcrt();
_imp___sys_nerr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sys_nerr");
}
void _elfimplib__sys_nerr() {
asm("leave\njmp *%0" : : "r"(_imp___sys_nerr));
}

