#include "msvcrt.h"
void _elfimplib__searchenv() asm("searchenv");
void *_imp___searchenv = NULL;
__attribute__((constructor)) void _elfimplib_init__searchenv() {
load_dll_msvcrt();
_imp___searchenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_searchenv");
}
void _elfimplib__searchenv() {
asm("leave\njmp *%0" : : "r"(_imp___searchenv));
}

void _elfimplibmang__searchenv() asm("_searchenv");
void _elfimplibmang__searchenv() {
asm("leave\njmp *%0" : : "r"(_imp___searchenv));
}

