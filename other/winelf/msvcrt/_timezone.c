#include "msvcrt.h"
void _elfimplib__timezone() asm("timezone");
void *_imp___timezone = NULL;
__attribute__((constructor)) void _elfimplib_init__timezone() {
load_dll_msvcrt();
_imp___timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "_timezone");
}
void _elfimplib__timezone() {
asm("leave\njmp *%0" : : "r"(_imp___timezone));
}

void _elfimplibmang__timezone() asm("_timezone");
void _elfimplibmang__timezone() {
asm("leave\njmp *%0" : : "r"(_imp___timezone));
}

