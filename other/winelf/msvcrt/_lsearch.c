#include "msvcrt.h"
void _elfimplib__lsearch() asm("lsearch");
void *_imp___lsearch = NULL;
__attribute__((constructor)) void _elfimplib_init__lsearch() {
load_dll_msvcrt();
_imp___lsearch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lsearch");
}
void _elfimplib__lsearch() {
asm("leave\njmp *%0" : : "r"(_imp___lsearch));
}

void _elfimplibmang__lsearch() asm("_lsearch");
void _elfimplibmang__lsearch() {
asm("leave\njmp *%0" : : "r"(_imp___lsearch));
}

