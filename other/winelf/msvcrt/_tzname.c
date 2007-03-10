#include "msvcrt.h"
void _elfimplib__tzname() asm("tzname");
void *_imp___tzname = NULL;
__attribute__((constructor)) void _elfimplib_init__tzname() {
load_dll_msvcrt();
_imp___tzname = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzname");
}
void _elfimplib__tzname() {
asm("leave\njmp *%0" : : "r"(_imp___tzname));
}

void _elfimplibmang__tzname() asm("_tzname");
void _elfimplibmang__tzname() {
asm("leave\njmp *%0" : : "r"(_imp___tzname));
}

