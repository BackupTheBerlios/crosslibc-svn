#include "msvcrt.h"
void _elfimplib__getche() asm("getche");
void *_imp___getche = NULL;
__attribute__((constructor)) void _elfimplib_init__getche() {
load_dll_msvcrt();
_imp___getche = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getche");
}
void _elfimplib__getche() {
asm("leave\njmp *%0" : : "r"(_imp___getche));
}

