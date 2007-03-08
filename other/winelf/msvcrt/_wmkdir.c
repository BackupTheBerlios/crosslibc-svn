#include "msvcrt.h"
void _elfimplib__wmkdir() asm("wmkdir");
void *_imp___wmkdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wmkdir() {
load_dll_msvcrt();
_imp___wmkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wmkdir");
}
void _elfimplib__wmkdir() {
asm("leave\njmp *%0" : : "r"(_imp___wmkdir));
}

