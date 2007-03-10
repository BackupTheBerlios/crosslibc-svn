#include "msvcrt.h"
void _elfimplib__fgetchar() asm("fgetchar");
void *_imp___fgetchar = NULL;
__attribute__((constructor)) void _elfimplib_init__fgetchar() {
load_dll_msvcrt();
_imp___fgetchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fgetchar");
}
void _elfimplib__fgetchar() {
asm("leave\njmp *%0" : : "r"(_imp___fgetchar));
}

void _elfimplibmang__fgetchar() asm("_fgetchar");
void _elfimplibmang__fgetchar() {
asm("leave\njmp *%0" : : "r"(_imp___fgetchar));
}

