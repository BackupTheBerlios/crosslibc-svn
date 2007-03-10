#include "msvcrt.h"
void _elfimplib__CIfmod() asm("CIfmod");
void *_imp___CIfmod = NULL;
__attribute__((constructor)) void _elfimplib_init__CIfmod() {
load_dll_msvcrt();
_imp___CIfmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIfmod");
}
void _elfimplib__CIfmod() {
asm("leave\njmp *%0" : : "r"(_imp___CIfmod));
}

void _elfimplibmang__CIfmod() asm("_CIfmod");
void _elfimplibmang__CIfmod() {
asm("leave\njmp *%0" : : "r"(_imp___CIfmod));
}

