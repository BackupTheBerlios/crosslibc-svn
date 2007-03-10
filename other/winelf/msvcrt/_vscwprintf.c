#include "msvcrt.h"
void _elfimplib__vscwprintf() asm("vscwprintf");
void *_imp___vscwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vscwprintf() {
load_dll_msvcrt();
_imp___vscwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscwprintf");
}
void _elfimplib__vscwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscwprintf));
}

void _elfimplibmang__vscwprintf() asm("_vscwprintf");
void _elfimplibmang__vscwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscwprintf));
}

