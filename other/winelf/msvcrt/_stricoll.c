#include "msvcrt.h"
void _elfimplib__stricoll() asm("stricoll");
void *_imp___stricoll = NULL;
__attribute__((constructor)) void _elfimplib_init__stricoll() {
load_dll_msvcrt();
_imp___stricoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricoll");
}
void _elfimplib__stricoll() {
asm("leave\njmp *%0" : : "r"(_imp___stricoll));
}

void _elfimplibmang__stricoll() asm("_stricoll");
void _elfimplibmang__stricoll() {
asm("leave\njmp *%0" : : "r"(_imp___stricoll));
}

