#include "msvcrt.h"
void _elfimplib__time64() asm("time64");
void *_imp___time64 = NULL;
__attribute__((constructor)) void _elfimplib_init__time64() {
load_dll_msvcrt();
_imp___time64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_time64");
}
void _elfimplib__time64() {
asm("leave\njmp *%0" : : "r"(_imp___time64));
}

void _elfimplibmang__time64() asm("_time64");
void _elfimplibmang__time64() {
asm("leave\njmp *%0" : : "r"(_imp___time64));
}

