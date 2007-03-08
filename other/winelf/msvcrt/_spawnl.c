#include "msvcrt.h"
void _elfimplib__spawnl() asm("spawnl");
void *_imp___spawnl = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnl() {
load_dll_msvcrt();
_imp___spawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnl");
}
void _elfimplib__spawnl() {
asm("leave\njmp *%0" : : "r"(_imp___spawnl));
}

