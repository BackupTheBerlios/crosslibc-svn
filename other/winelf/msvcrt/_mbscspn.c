#include "msvcrt.h"
void _elfimplib__mbscspn() asm("mbscspn");
void *_imp___mbscspn = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscspn() {
load_dll_msvcrt();
_imp___mbscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscspn");
}
void _elfimplib__mbscspn() {
asm("leave\njmp *%0" : : "r"(_imp___mbscspn));
}

