#include "msvcrt.h"
void _elfimplib__rmdir() asm("rmdir");
void *_imp___rmdir = NULL;
__attribute__((constructor)) void _elfimplib_init__rmdir() {
load_dll_msvcrt();
_imp___rmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rmdir");
}
void _elfimplib__rmdir() {
asm("leave\njmp *%0" : : "r"(_imp___rmdir));
}

