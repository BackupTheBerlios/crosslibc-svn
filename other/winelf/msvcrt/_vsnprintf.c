#include "msvcrt.h"
void _elfimplib__vsnprintf() asm("vsnprintf");
void *_imp___vsnprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vsnprintf() {
load_dll_msvcrt();
_imp___vsnprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vsnprintf");
}
void _elfimplib__vsnprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vsnprintf));
}

