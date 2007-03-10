#include "msvcrt.h"
void _elfimplib__ui64tow() asm("ui64tow");
void *_imp___ui64tow = NULL;
__attribute__((constructor)) void _elfimplib_init__ui64tow() {
load_dll_msvcrt();
_imp___ui64tow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64tow");
}
void _elfimplib__ui64tow() {
asm("leave\njmp *%0" : : "r"(_imp___ui64tow));
}

void _elfimplibmang__ui64tow() asm("_ui64tow");
void _elfimplibmang__ui64tow() {
asm("leave\njmp *%0" : : "r"(_imp___ui64tow));
}

