#include "msvcrt.h"
void _elfimplib__ui64toa() asm("ui64toa");
void *_imp___ui64toa = NULL;
__attribute__((constructor)) void _elfimplib_init__ui64toa() {
load_dll_msvcrt();
_imp___ui64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ui64toa");
}
void _elfimplib__ui64toa() {
asm("leave\njmp *%0" : : "r"(_imp___ui64toa));
}

void _elfimplibmang__ui64toa() asm("_ui64toa");
void _elfimplibmang__ui64toa() {
asm("leave\njmp *%0" : : "r"(_imp___ui64toa));
}

