#include "msvcrt.h"
void _elfimplib__ftime() asm("ftime");
void *_imp___ftime = NULL;
__attribute__((constructor)) void _elfimplib_init__ftime() {
load_dll_msvcrt();
_imp___ftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime");
}
void _elfimplib__ftime() {
asm("leave\njmp *%0" : : "r"(_imp___ftime));
}

void _elfimplibmang__ftime() asm("_ftime");
void _elfimplibmang__ftime() {
asm("leave\njmp *%0" : : "r"(_imp___ftime));
}

