#include "msvcrt.h"
void _elfimplib__chdir() asm("chdir");
void *_imp___chdir = NULL;
__attribute__((constructor)) void _elfimplib_init__chdir() {
load_dll_msvcrt();
_imp___chdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chdir");
}
void _elfimplib__chdir() {
asm("leave\njmp *%0" : : "r"(_imp___chdir));
}

