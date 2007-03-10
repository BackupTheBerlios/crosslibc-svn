#include "msvcrt.h"
void _elfimplib__stat() asm("stat");
void *_imp___stat = NULL;
__attribute__((constructor)) void _elfimplib_init__stat() {
load_dll_msvcrt();
_imp___stat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat");
}
void _elfimplib__stat() {
asm("leave\njmp *%0" : : "r"(_imp___stat));
}

void _elfimplibmang__stat() asm("_stat");
void _elfimplibmang__stat() {
asm("leave\njmp *%0" : : "r"(_imp___stat));
}

