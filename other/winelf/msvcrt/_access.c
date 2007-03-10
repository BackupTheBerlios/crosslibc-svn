#include "msvcrt.h"
void _elfimplib__access() asm("access");
void *_imp___access = NULL;
__attribute__((constructor)) void _elfimplib_init__access() {
load_dll_msvcrt();
_imp___access = (void *) _elf_GetProcAddress(_dll_msvcrt, "_access");
}
void _elfimplib__access() {
asm("leave\njmp *%0" : : "r"(_imp___access));
}

void _elfimplibmang__access() asm("_access");
void _elfimplibmang__access() {
asm("leave\njmp *%0" : : "r"(_imp___access));
}

