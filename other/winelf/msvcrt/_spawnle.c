#include "msvcrt.h"
void _elfimplib__spawnle() asm("spawnle");
void *_imp___spawnle = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnle() {
load_dll_msvcrt();
_imp___spawnle = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnle");
}
void _elfimplib__spawnle() {
asm("leave\njmp *%0" : : "r"(_imp___spawnle));
}

void _elfimplibmang__spawnle() asm("_spawnle");
void _elfimplibmang__spawnle() {
asm("leave\njmp *%0" : : "r"(_imp___spawnle));
}

