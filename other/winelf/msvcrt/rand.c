#include "msvcrt.h"
void _elfimplib_rand() asm("rand");
void *_imp__rand = NULL;
__attribute__((constructor)) void _elfimplib_init_rand() {
load_dll_msvcrt();
_imp__rand = (void *) _elf_GetProcAddress(_dll_msvcrt, "rand");
}
void _elfimplib_rand() {
asm("leave\njmp *%0" : : "r"(_imp__rand));
}

