#include "msvcrt.h"
void _elfimplib__wmktemp() asm("wmktemp");
void *_imp___wmktemp = NULL;
__attribute__((constructor)) void _elfimplib_init__wmktemp() {
load_dll_msvcrt();
_imp___wmktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmktemp");
}
void _elfimplib__wmktemp() {
asm("leave\njmp *%0" : : "r"(_imp___wmktemp));
}

