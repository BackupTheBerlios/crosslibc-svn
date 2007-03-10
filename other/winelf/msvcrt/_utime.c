#include "msvcrt.h"
void _elfimplib__utime() asm("utime");
void *_imp___utime = NULL;
__attribute__((constructor)) void _elfimplib_init__utime() {
load_dll_msvcrt();
_imp___utime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_utime");
}
void _elfimplib__utime() {
asm("leave\njmp *%0" : : "r"(_imp___utime));
}

void _elfimplibmang__utime() asm("_utime");
void _elfimplibmang__utime() {
asm("leave\njmp *%0" : : "r"(_imp___utime));
}

