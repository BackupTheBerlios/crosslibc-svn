#include "msvcrt.h"
void _elfimplib___argc() asm("_argc");
void *_imp____argc = NULL;
__attribute__((constructor)) void _elfimplib_init___argc() {
load_dll_msvcrt();
_imp____argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argc");
}
void _elfimplib___argc() {
asm("leave\njmp *%0" : : "r"(_imp____argc));
}

void _elfimplibmang___argc() asm("__argc");
void _elfimplibmang___argc() {
asm("leave\njmp *%0" : : "r"(_imp____argc));
}

