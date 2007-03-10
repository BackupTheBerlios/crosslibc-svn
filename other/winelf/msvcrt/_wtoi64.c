#include "msvcrt.h"
void _elfimplib__wtoi64() asm("wtoi64");
void *_imp___wtoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wtoi64() {
load_dll_msvcrt();
_imp___wtoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtoi64");
}
void _elfimplib__wtoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wtoi64));
}

void _elfimplibmang__wtoi64() asm("_wtoi64");
void _elfimplibmang__wtoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wtoi64));
}

