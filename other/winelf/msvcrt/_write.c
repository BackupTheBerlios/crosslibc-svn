#include "msvcrt.h"
void _elfimplib__write() asm("write");
void *_imp___write = NULL;
__attribute__((constructor)) void _elfimplib_init__write() {
load_dll_msvcrt();
_imp___write = (void *) _elf_GetProcAddress(_dll_msvcrt, "_write");
}
void _elfimplib__write() {
asm("leave\njmp *%0" : : "r"(_imp___write));
}

