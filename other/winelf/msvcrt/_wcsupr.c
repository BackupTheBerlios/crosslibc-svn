#include "msvcrt.h"
void _elfimplib__wcsupr() asm("wcsupr");
void *_imp___wcsupr = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsupr() {
load_dll_msvcrt();
_imp___wcsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsupr");
}
void _elfimplib__wcsupr() {
asm("leave\njmp *%0" : : "r"(_imp___wcsupr));
}

