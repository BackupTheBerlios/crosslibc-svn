#include "msvcrt.h"
void _elfimplib__CIcosh() asm("CIcosh");
void *_imp___CIcosh = NULL;
__attribute__((constructor)) void _elfimplib_init__CIcosh() {
load_dll_msvcrt();
_imp___CIcosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcosh");
}
void _elfimplib__CIcosh() {
asm("leave\njmp *%0" : : "r"(_imp___CIcosh));
}

void _elfimplibmang__CIcosh() asm("_CIcosh");
void _elfimplibmang__CIcosh() {
asm("leave\njmp *%0" : : "r"(_imp___CIcosh));
}

