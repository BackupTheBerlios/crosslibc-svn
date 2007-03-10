#include "msvcrt.h"
void _elfimplib__assert() asm("assert");
void *_imp___assert = NULL;
__attribute__((constructor)) void _elfimplib_init__assert() {
load_dll_msvcrt();
_imp___assert = (void *) _elf_GetProcAddress(_dll_msvcrt, "_assert");
}
void _elfimplib__assert() {
asm("leave\njmp *%0" : : "r"(_imp___assert));
}

void _elfimplibmang__assert() asm("_assert");
void _elfimplibmang__assert() {
asm("leave\njmp *%0" : : "r"(_imp___assert));
}

