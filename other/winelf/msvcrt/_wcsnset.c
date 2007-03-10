#include "msvcrt.h"
void _elfimplib__wcsnset() asm("wcsnset");
void *_imp___wcsnset = NULL;
__attribute__((constructor)) void _elfimplib_init__wcsnset() {
load_dll_msvcrt();
_imp___wcsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcsnset");
}
void _elfimplib__wcsnset() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnset));
}

void _elfimplibmang__wcsnset() asm("_wcsnset");
void _elfimplibmang__wcsnset() {
asm("leave\njmp *%0" : : "r"(_imp___wcsnset));
}

