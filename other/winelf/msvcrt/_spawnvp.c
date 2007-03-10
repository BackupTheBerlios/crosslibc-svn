#include "msvcrt.h"
void _elfimplib__spawnvp() asm("spawnvp");
void *_imp___spawnvp = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnvp() {
load_dll_msvcrt();
_imp___spawnvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvp");
}
void _elfimplib__spawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnvp));
}

void _elfimplibmang__spawnvp() asm("_spawnvp");
void _elfimplibmang__spawnvp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnvp));
}

