#include "msvcrt.h"
void _elfimplib__wenviron() asm("wenviron");
void *_imp___wenviron = NULL;
__attribute__((constructor)) void _elfimplib_init__wenviron() {
load_dll_msvcrt();
_imp___wenviron = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wenviron");
}
void _elfimplib__wenviron() {
asm("leave\njmp *%0" : : "r"(_imp___wenviron));
}

