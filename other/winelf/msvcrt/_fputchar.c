#include "msvcrt.h"
void _elfimplib__fputchar() asm("fputchar");
void *_imp___fputchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fputchar() {
load_dll_msvcrt();
_imp___fputchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fputchar");
}
void _elfimplib__fputchar() {
asm("leave\njmp *%0" : : "r"(_imp___fputchar));
}

void _elfimplibmang__fputchar() asm("_fputchar");
void _elfimplibmang__fputchar() {
asm("leave\njmp *%0" : : "r"(_imp___fputchar));
}

