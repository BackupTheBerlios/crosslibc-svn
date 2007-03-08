#include "msvcrt.h"
void _elfimplib__unlock() asm("unlock");
void *_imp___unlock = NULL;
__attribute__((constructor)) void _elfimplib_init__unlock() {
load_dll_msvcrt();
_imp___unlock = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlock");
}
void _elfimplib__unlock() {
asm("leave\njmp *%0" : : "r"(_imp___unlock));
}

