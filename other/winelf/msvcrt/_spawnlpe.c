#include "msvcrt.h"
void _elfimplib__spawnlpe() asm("spawnlpe");
void *_imp___spawnlpe = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnlpe() {
load_dll_msvcrt();
_imp___spawnlpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlpe");
}
void _elfimplib__spawnlpe() {
asm("leave\njmp *%0" : : "r"(_imp___spawnlpe));
}

