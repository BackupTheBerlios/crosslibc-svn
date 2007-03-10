#include "msvcrt.h"
void _elfimplib__tzset() asm("tzset");
void *_imp___tzset = NULL;
__attribute__((constructor)) void _elfimplib_init__tzset() {
load_dll_msvcrt();
_imp___tzset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tzset");
}
void _elfimplib__tzset() {
asm("leave\njmp *%0" : : "r"(_imp___tzset));
}

void _elfimplibmang__tzset() asm("_tzset");
void _elfimplibmang__tzset() {
asm("leave\njmp *%0" : : "r"(_imp___tzset));
}

