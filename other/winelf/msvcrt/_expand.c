#include "msvcrt.h"
void _elfimplib__expand() asm("expand");
void *_imp___expand = NULL;
__attribute__((constructor)) void _elfimplib_init__expand() {
load_dll_msvcrt();
_imp___expand = (void *) _elf_GetProcAddress(_dll_msvcrt, "_expand");
}
void _elfimplib__expand() {
asm("leave\njmp *%0" : : "r"(_imp___expand));
}

