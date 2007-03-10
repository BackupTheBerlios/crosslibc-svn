#include "msvcrt.h"
void _elfimplib__mbscpy() asm("mbscpy");
void *_imp___mbscpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscpy() {
load_dll_msvcrt();
_imp___mbscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscpy");
}
void _elfimplib__mbscpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbscpy));
}

void _elfimplibmang__mbscpy() asm("_mbscpy");
void _elfimplibmang__mbscpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbscpy));
}

