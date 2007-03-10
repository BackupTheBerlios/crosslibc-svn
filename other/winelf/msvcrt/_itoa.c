#include "msvcrt.h"
void _elfimplib__itoa() asm("itoa");
void *_imp___itoa = NULL;
__attribute__((constructor)) void _elfimplib_init__itoa() {
load_dll_msvcrt();
_imp___itoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itoa");
}
void _elfimplib__itoa() {
asm("leave\njmp *%0" : : "r"(_imp___itoa));
}

void _elfimplibmang__itoa() asm("_itoa");
void _elfimplibmang__itoa() {
asm("leave\njmp *%0" : : "r"(_imp___itoa));
}

