#include "msvcrt.h"
void _elfimplib__fputwchar() asm("fputwchar");
void *_imp___fputwchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fputwchar() {
load_dll_msvcrt();
_imp___fputwchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputwchar");
}
void _elfimplib__fputwchar() {
asm("leave\njmp *%0" : : "r"(_imp___fputwchar));
}

