#include "msvcrt.h"
void _elfimplib__futime64() asm("futime64");
void *_imp___futime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__futime64() {
load_dll_msvcrt();
_imp___futime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime64");
}
void _elfimplib__futime64() {
asm("leave\njmp *%0" : : "r"(_imp___futime64));
}

void _elfimplibmang__futime64() asm("_futime64");
void _elfimplibmang__futime64() {
asm("leave\njmp *%0" : : "r"(_imp___futime64));
}

