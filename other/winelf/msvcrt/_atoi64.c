#include "msvcrt.h"
void _elfimplib__atoi64() asm("atoi64");
void *_imp___atoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__atoi64() {
load_dll_msvcrt();
_imp___atoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_atoi64");
}
void _elfimplib__atoi64() {
asm("leave\njmp *%0" : : "r"(_imp___atoi64));
}

void _elfimplibmang__atoi64() asm("_atoi64");
void _elfimplibmang__atoi64() {
asm("leave\njmp *%0" : : "r"(_imp___atoi64));
}

