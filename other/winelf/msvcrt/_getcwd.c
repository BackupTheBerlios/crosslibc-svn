#include "msvcrt.h"
void _elfimplib__getcwd() asm("getcwd");
void *_imp___getcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__getcwd() {
load_dll_msvcrt();
_imp___getcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getcwd");
}
void _elfimplib__getcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getcwd));
}

void _elfimplibmang__getcwd() asm("_getcwd");
void _elfimplibmang__getcwd() {
asm("leave\njmp *%0" : : "r"(_imp___getcwd));
}

