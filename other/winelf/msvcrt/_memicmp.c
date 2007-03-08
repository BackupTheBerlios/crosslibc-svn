#include "msvcrt.h"
void _elfimplib__memicmp() asm("memicmp");
void *_imp___memicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__memicmp() {
load_dll_msvcrt();
_imp___memicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memicmp");
}
void _elfimplib__memicmp() {
asm("leave\njmp *%0" : : "r"(_imp___memicmp));
}

