#include "msvcrt.h"
void _elfimplib__strtoi64() asm("strtoi64");
void *_imp___strtoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__strtoi64() {
load_dll_msvcrt();
_imp___strtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoi64");
}
void _elfimplib__strtoi64() {
asm("leave\njmp *%0" : : "r"(_imp___strtoi64));
}

