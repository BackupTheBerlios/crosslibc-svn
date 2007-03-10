#include "msvcrt.h"
void _elfimplib__getmbcp() asm("getmbcp");
void *_imp___getmbcp = NULL;
__attribute__((constructor)) void _elfimplib_init__getmbcp() {
load_dll_msvcrt();
_imp___getmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmbcp");
}
void _elfimplib__getmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___getmbcp));
}

void _elfimplibmang__getmbcp() asm("_getmbcp");
void _elfimplibmang__getmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___getmbcp));
}

