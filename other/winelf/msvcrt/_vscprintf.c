#include "msvcrt.h"
void _elfimplib__vscprintf() asm("vscprintf");
void *_imp___vscprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__vscprintf() {
load_dll_msvcrt();
_imp___vscprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_vscprintf");
}
void _elfimplib__vscprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscprintf));
}

void _elfimplibmang__vscprintf() asm("_vscprintf");
void _elfimplibmang__vscprintf() {
asm("leave\njmp *%0" : : "r"(_imp___vscprintf));
}

