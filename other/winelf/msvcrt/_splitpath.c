#include "msvcrt.h"
void _elfimplib__splitpath() asm("splitpath");
void *_imp___splitpath = NULL;
__attribute__((constructor)) void _elfimplib_init__splitpath() {
load_dll_msvcrt();
_imp___splitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_splitpath");
}
void _elfimplib__splitpath() {
asm("leave\njmp *%0" : : "r"(_imp___splitpath));
}

void _elfimplibmang__splitpath() asm("_splitpath");
void _elfimplibmang__splitpath() {
asm("leave\njmp *%0" : : "r"(_imp___splitpath));
}

