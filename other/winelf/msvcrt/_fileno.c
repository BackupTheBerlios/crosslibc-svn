#include "msvcrt.h"
void _elfimplib__fileno() asm("fileno");
void *_imp___fileno = NULL;
__attribute__((constructor)) void _elfimplib_init__fileno() {
load_dll_msvcrt();
_imp___fileno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fileno");
}
void _elfimplib__fileno() {
asm("leave\njmp *%0" : : "r"(_imp___fileno));
}

