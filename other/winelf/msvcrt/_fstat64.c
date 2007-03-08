#include "msvcrt.h"
void _elfimplib__fstat64() asm("fstat64");
void *_imp___fstat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__fstat64() {
load_dll_msvcrt();
_imp___fstat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat64");
}
void _elfimplib__fstat64() {
asm("leave\njmp *%0" : : "r"(_imp___fstat64));
}

