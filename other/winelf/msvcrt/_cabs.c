#include "msvcrt.h"
void _elfimplib__cabs() asm("cabs");
void *_imp___cabs = NULL;
__attribute__((constructor)) void _elfimplib_init__cabs() {
load_dll_msvcrt();
_imp___cabs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cabs");
}
void _elfimplib__cabs() {
asm("leave\njmp *%0" : : "r"(_imp___cabs));
}

void _elfimplibmang__cabs() asm("_cabs");
void _elfimplibmang__cabs() {
asm("leave\njmp *%0" : : "r"(_imp___cabs));
}

