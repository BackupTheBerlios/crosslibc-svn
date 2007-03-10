#include "msvcrt.h"
void _elfimplib__utime64() asm("utime64");
void *_imp___utime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__utime64() {
load_dll_msvcrt();
_imp___utime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime64");
}
void _elfimplib__utime64() {
asm("leave\njmp *%0" : : "r"(_imp___utime64));
}

void _elfimplibmang__utime64() asm("_utime64");
void _elfimplibmang__utime64() {
asm("leave\njmp *%0" : : "r"(_imp___utime64));
}

