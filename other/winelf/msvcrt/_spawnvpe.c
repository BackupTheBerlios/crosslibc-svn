#include "msvcrt.h"
void _elfimplib__spawnvpe() asm("spawnvpe");
void *_imp___spawnvpe = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnvpe() {
load_dll_msvcrt();
_imp___spawnvpe = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnvpe");
}
void _elfimplib__spawnvpe() {
asm("leave\njmp *%0" : : "r"(_imp___spawnvpe));
}
