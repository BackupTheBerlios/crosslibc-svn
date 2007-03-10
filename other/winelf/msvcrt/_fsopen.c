#include "msvcrt.h"
void _elfimplib__fsopen() asm("fsopen");
void *_imp___fsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__fsopen() {
load_dll_msvcrt();
_imp___fsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fsopen");
}
void _elfimplib__fsopen() {
asm("leave\njmp *%0" : : "r"(_imp___fsopen));
}

void _elfimplibmang__fsopen() asm("_fsopen");
void _elfimplibmang__fsopen() {
asm("leave\njmp *%0" : : "r"(_imp___fsopen));
}

