#include "msvcrt.h"
void _elfimplib__futime() asm("futime");
void *_imp___futime = NULL;
__attribute__((constructor)) void _elfimplib_init__futime() {
load_dll_msvcrt();
_imp___futime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_futime");
}
void _elfimplib__futime() {
asm("leave\njmp *%0" : : "r"(_imp___futime));
}

void _elfimplibmang__futime() asm("_futime");
void _elfimplibmang__futime() {
asm("leave\njmp *%0" : : "r"(_imp___futime));
}

