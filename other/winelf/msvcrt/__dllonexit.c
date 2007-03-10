#include "msvcrt.h"
void _elfimplib___dllonexit() asm("_dllonexit");
void *_imp____dllonexit = NULL;
__attribute__((constructor)) void _elfimplib_init___dllonexit() {
load_dll_msvcrt();
_imp____dllonexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "__dllonexit");
}
void _elfimplib___dllonexit() {
asm("leave\njmp *%0" : : "r"(_imp____dllonexit));
}

void _elfimplibmang___dllonexit() asm("__dllonexit");
void _elfimplibmang___dllonexit() {
asm("leave\njmp *%0" : : "r"(_imp____dllonexit));
}

