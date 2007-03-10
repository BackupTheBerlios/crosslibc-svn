#include "msvcrt.h"
void _elfimplib__cgets() asm("cgets");
void *_imp___cgets = NULL;
__attribute__((constructor)) void _elfimplib_init__cgets() {
load_dll_msvcrt();
_imp___cgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cgets");
}
void _elfimplib__cgets() {
asm("leave\njmp *%0" : : "r"(_imp___cgets));
}

void _elfimplibmang__cgets() asm("_cgets");
void _elfimplibmang__cgets() {
asm("leave\njmp *%0" : : "r"(_imp___cgets));
}

