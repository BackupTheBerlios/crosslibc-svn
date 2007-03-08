#include "msvcrt.h"
void _elfimplib__getwche() asm("getwche");
void *_imp___getwche = NULL;
__attribute__((constructor)) void _elfimplib_init__getwche() {
load_dll_msvcrt();
_imp___getwche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwche");
}
void _elfimplib__getwche() {
asm("leave\njmp *%0" : : "r"(_imp___getwche));
}

