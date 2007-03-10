#include "msvcrt.h"
void _elfimplib__spawnve() asm("spawnve");
void *_imp___spawnve = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnve() {
load_dll_msvcrt();
_imp___spawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnve");
}
void _elfimplib__spawnve() {
asm("leave\njmp *%0" : : "r"(_imp___spawnve));
}

void _elfimplibmang__spawnve() asm("_spawnve");
void _elfimplibmang__spawnve() {
asm("leave\njmp *%0" : : "r"(_imp___spawnve));
}

