#include "msvcrt.h"
void _elfimplib__fdopen() asm("fdopen");
void *_imp___fdopen = NULL;
__attribute__((constructor)) void _elfimplib_init__fdopen() {
load_dll_msvcrt();
_imp___fdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fdopen");
}
void _elfimplib__fdopen() {
asm("leave\njmp *%0" : : "r"(_imp___fdopen));
}

