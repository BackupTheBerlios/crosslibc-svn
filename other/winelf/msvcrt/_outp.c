#include "msvcrt.h"
void _elfimplib__outp() asm("outp");
void *_imp___outp = NULL;
__attribute__((constructor)) void _elfimplib_init__outp() {
load_dll_msvcrt();
_imp___outp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outp");
}
void _elfimplib__outp() {
asm("leave\njmp *%0" : : "r"(_imp___outp));
}

void _elfimplibmang__outp() asm("_outp");
void _elfimplibmang__outp() {
asm("leave\njmp *%0" : : "r"(_imp___outp));
}

