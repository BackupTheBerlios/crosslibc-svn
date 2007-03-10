#include "msvcrt.h"
void _elfimplib__spawnv() asm("spawnv");
void *_imp___spawnv = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnv() {
load_dll_msvcrt();
_imp___spawnv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnv");
}
void _elfimplib__spawnv() {
asm("leave\njmp *%0" : : "r"(_imp___spawnv));
}

void _elfimplibmang__spawnv() asm("_spawnv");
void _elfimplibmang__spawnv() {
asm("leave\njmp *%0" : : "r"(_imp___spawnv));
}

