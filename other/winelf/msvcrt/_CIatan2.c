#include "msvcrt.h"
void _elfimplib__CIatan2() asm("CIatan2");
void *_imp___CIatan2 = NULL;
__attribute__((constructor)) void _elfimplib_init__CIatan2() {
load_dll_msvcrt();
_imp___CIatan2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan2");
}
void _elfimplib__CIatan2() {
asm("leave\njmp *%0" : : "r"(_imp___CIatan2));
}

void _elfimplibmang__CIatan2() asm("_CIatan2");
void _elfimplibmang__CIatan2() {
asm("leave\njmp *%0" : : "r"(_imp___CIatan2));
}

