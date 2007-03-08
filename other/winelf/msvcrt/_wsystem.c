#include "msvcrt.h"
void _elfimplib__wsystem() asm("wsystem");
void *_imp___wsystem = NULL;
__attribute__((constructor)) void _elfimplib_init__wsystem() {
load_dll_msvcrt();
_imp___wsystem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsystem");
}
void _elfimplib__wsystem() {
asm("leave\njmp *%0" : : "r"(_imp___wsystem));
}

