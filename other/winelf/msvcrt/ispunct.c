#include "msvcrt.h"
void _elfimplib_ispunct() asm("ispunct");
void *_imp__ispunct = NULL;
__attribute__((constructor)) void _elfimplib_init_ispunct() {
load_dll_msvcrt();
_imp__ispunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "ispunct");
}
void _elfimplib_ispunct() {
asm("leave\njmp *%0" : : "r"(_imp__ispunct));
}

