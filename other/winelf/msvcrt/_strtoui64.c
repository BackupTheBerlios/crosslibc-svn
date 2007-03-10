#include "msvcrt.h"
void _elfimplib__strtoui64() asm("strtoui64");
void *_imp___strtoui64 = NULL;
__attribute__((constructor)) void _elfimplib_init__strtoui64() {
load_dll_msvcrt();
_imp___strtoui64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtoui64");
}
void _elfimplib__strtoui64() {
asm("leave\njmp *%0" : : "r"(_imp___strtoui64));
}

void _elfimplibmang__strtoui64() asm("_strtoui64");
void _elfimplibmang__strtoui64() {
asm("leave\njmp *%0" : : "r"(_imp___strtoui64));
}

