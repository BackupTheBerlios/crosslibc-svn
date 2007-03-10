#include "msvcrt.h"
void _elfimplib__cprintf() asm("cprintf");
void *_imp___cprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__cprintf() {
load_dll_msvcrt();
_imp___cprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cprintf");
}
void _elfimplib__cprintf() {
asm("leave\njmp *%0" : : "r"(_imp___cprintf));
}

void _elfimplibmang__cprintf() asm("_cprintf");
void _elfimplibmang__cprintf() {
asm("leave\njmp *%0" : : "r"(_imp___cprintf));
}

