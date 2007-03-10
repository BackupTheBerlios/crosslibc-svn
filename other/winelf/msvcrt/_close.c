#include "msvcrt.h"
void _elfimplib__close() asm("close");
void *_imp___close = NULL;
__attribute__((constructor)) void _elfimplib_init__close() {
load_dll_msvcrt();
_imp___close = (void *) _elf_GetProcAddress(_dll_msvcrt, "_close");
}
void _elfimplib__close() {
asm("leave\njmp *%0" : : "r"(_imp___close));
}

void _elfimplibmang__close() asm("_close");
void _elfimplibmang__close() {
asm("leave\njmp *%0" : : "r"(_imp___close));
}

