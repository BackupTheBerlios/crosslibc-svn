#include "msvcrt.h"
void _elfimplib__localtime64() asm("localtime64");
void *_imp___localtime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__localtime64() {
load_dll_msvcrt();
_imp___localtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_localtime64");
}
void _elfimplib__localtime64() {
asm("leave\njmp *%0" : : "r"(_imp___localtime64));
}

