#include "msvcrt.h"
void _elfimplib__ismbslead() asm("ismbslead");
void *_imp___ismbslead = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbslead() {
load_dll_msvcrt();
_imp___ismbslead = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbslead");
}
void _elfimplib__ismbslead() {
asm("leave\njmp *%0" : : "r"(_imp___ismbslead));
}

void _elfimplibmang__ismbslead() asm("_ismbslead");
void _elfimplibmang__ismbslead() {
asm("leave\njmp *%0" : : "r"(_imp___ismbslead));
}

