#include "msvcrt.h"
void _elfimplib__wspawnv() asm("wspawnv");
void *_imp___wspawnv = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnv() {
load_dll_msvcrt();
_imp___wspawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnv");
}
void _elfimplib__wspawnv() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnv));
}

