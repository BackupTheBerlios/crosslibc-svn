#include "msvcrt.h"
void _elfimplib__vsnwprintf() asm("vsnwprintf");
void *_imp___vsnwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vsnwprintf() {
load_dll_msvcrt();
_imp___vsnwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnwprintf");
}
void _elfimplib__vsnwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vsnwprintf));
}

void _elfimplibmang__vsnwprintf() asm("_vsnwprintf");
void _elfimplibmang__vsnwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vsnwprintf));
}

