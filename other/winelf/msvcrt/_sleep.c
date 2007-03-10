#include "msvcrt.h"
void _elfimplib__sleep() asm("sleep");
void *_imp___sleep = NULL;
__attribute__((constructor)) void _elfimplib_init__sleep() {
load_dll_msvcrt();
_imp___sleep = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sleep");
}
void _elfimplib__sleep() {
asm("leave\njmp *%0" : : "r"(_imp___sleep));
}

void _elfimplibmang__sleep() asm("_sleep");
void _elfimplibmang__sleep() {
asm("leave\njmp *%0" : : "r"(_imp___sleep));
}

