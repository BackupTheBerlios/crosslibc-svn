#include "msvcrt.h"
void _elfimplib__statusfp() asm("statusfp");
void *_imp___statusfp = NULL;
__attribute__((constructor)) void _elfimplib_init__statusfp() {
load_dll_msvcrt();
_imp___statusfp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_statusfp");
}
void _elfimplib__statusfp() {
asm("leave\njmp *%0" : : "r"(_imp___statusfp));
}

void _elfimplibmang__statusfp() asm("_statusfp");
void _elfimplibmang__statusfp() {
asm("leave\njmp *%0" : : "r"(_imp___statusfp));
}

