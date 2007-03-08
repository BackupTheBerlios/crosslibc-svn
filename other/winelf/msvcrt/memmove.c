#include "msvcrt.h"
void _elfimplib_memmove() asm("memmove");
void *_imp__memmove = NULL;
__attribute__((constructor)) void _elfimplib_init_memmove() {
load_dll_msvcrt();
_imp__memmove = (void *) _elf_GetProcAddress(_dll_msvcrt, "memmove");
}
void _elfimplib_memmove() {
asm("leave\njmp *%0" : : "r"(_imp__memmove));
}

