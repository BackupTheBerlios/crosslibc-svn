#include "msvcrt.h"
void _elfimplib__mbcjmstojis() asm("mbcjmstojis");
void *_imp___mbcjmstojis = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcjmstojis() {
load_dll_msvcrt();
_imp___mbcjmstojis = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjmstojis");
}
void _elfimplib__mbcjmstojis() {
asm("leave\njmp *%0" : : "r"(_imp___mbcjmstojis));
}

void _elfimplibmang__mbcjmstojis() asm("_mbcjmstojis");
void _elfimplibmang__mbcjmstojis() {
asm("leave\njmp *%0" : : "r"(_imp___mbcjmstojis));
}

