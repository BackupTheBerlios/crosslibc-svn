#include "msvcrt.h"
void _elfimplib__filbuf() asm("filbuf");
void *_imp___filbuf = NULL;
__attribute__((constructor)) void _elfimplib_init__filbuf() {
load_dll_msvcrt();
_imp___filbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_filbuf");
}
void _elfimplib__filbuf() {
asm("leave\njmp *%0" : : "r"(_imp___filbuf));
}

