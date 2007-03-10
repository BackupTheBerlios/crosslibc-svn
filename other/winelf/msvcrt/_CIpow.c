#include "msvcrt.h"
void _elfimplib__CIpow() asm("CIpow");
void *_imp___CIpow = NULL;
__attribute__((constructor)) void _elfimplib_init__CIpow() {
load_dll_msvcrt();
_imp___CIpow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIpow");
}
void _elfimplib__CIpow() {
asm("leave\njmp *%0" : : "r"(_imp___CIpow));
}

void _elfimplibmang__CIpow() asm("_CIpow");
void _elfimplibmang__CIpow() {
asm("leave\njmp *%0" : : "r"(_imp___CIpow));
}

