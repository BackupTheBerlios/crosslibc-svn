#include "msvcrt.h"
void _elfimplib__spawnlp() asm("spawnlp");
void *_imp___spawnlp = NULL;
__attribute__((constructor)) void _elfimplib_init__spawnlp() {
load_dll_msvcrt();
_imp___spawnlp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_spawnlp");
}
void _elfimplib__spawnlp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnlp));
}

void _elfimplibmang__spawnlp() asm("_spawnlp");
void _elfimplibmang__spawnlp() {
asm("leave\njmp *%0" : : "r"(_imp___spawnlp));
}

