#include "msvcrt.h"
void _elfimplib__fstati64() asm("fstati64");
void *_imp___fstati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__fstati64() {
load_dll_msvcrt();
_imp___fstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstati64");
}
void _elfimplib__fstati64() {
asm("leave\njmp *%0" : : "r"(_imp___fstati64));
}

