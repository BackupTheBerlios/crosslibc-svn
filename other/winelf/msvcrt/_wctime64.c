#include "msvcrt.h"
void _elfimplib__wctime64() asm("wctime64");
void *_imp___wctime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wctime64() {
load_dll_msvcrt();
_imp___wctime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wctime64");
}
void _elfimplib__wctime64() {
asm("leave\njmp *%0" : : "r"(_imp___wctime64));
}

