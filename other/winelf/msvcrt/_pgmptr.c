#include "msvcrt.h"
void _elfimplib__pgmptr() asm("pgmptr");
void *_imp___pgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init__pgmptr() {
load_dll_msvcrt();
_imp___pgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pgmptr");
}
void _elfimplib__pgmptr() {
asm("leave\njmp *%0" : : "r"(_imp___pgmptr));
}

