#include "msvcrt.h"
void _elfimplib__wcstoi64() asm("wcstoi64");
void *_imp___wcstoi64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wcstoi64() {
load_dll_msvcrt();
_imp___wcstoi64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcstoi64");
}
void _elfimplib__wcstoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoi64));
}

void _elfimplibmang__wcstoi64() asm("_wcstoi64");
void _elfimplibmang__wcstoi64() {
asm("leave\njmp *%0" : : "r"(_imp___wcstoi64));
}

