#include "msvcrt.h"
void _elfimplib__beep() asm("beep");
void *_imp___beep = NULL;
__attribute__((constructor)) void _elfimplib_init__beep() {
load_dll_msvcrt();
_imp___beep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beep");
}
void _elfimplib__beep() {
asm("leave\njmp *%0" : : "r"(_imp___beep));
}

void _elfimplibmang__beep() asm("_beep");
void _elfimplibmang__beep() {
asm("leave\njmp *%0" : : "r"(_imp___beep));
}

