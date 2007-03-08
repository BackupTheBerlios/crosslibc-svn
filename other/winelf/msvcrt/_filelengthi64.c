#include "msvcrt.h"
void _elfimplib__filelengthi64() asm("filelengthi64");
void *_imp___filelengthi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__filelengthi64() {
load_dll_msvcrt();
_imp___filelengthi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filelengthi64");
}
void _elfimplib__filelengthi64() {
asm("leave\njmp *%0" : : "r"(_imp___filelengthi64));
}

