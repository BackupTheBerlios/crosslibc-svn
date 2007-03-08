#include "msvcrt.h"
void _elfimplib__endthread() asm("endthread");
void *_imp___endthread = NULL;
__attribute__((constructor)) void _elfimplib_init__endthread() {
load_dll_msvcrt();
_imp___endthread = (void *) _elf_GetProcAddress(_dll_msvcrt, "_endthread");
}
void _elfimplib__endthread() {
asm("leave\njmp *%0" : : "r"(_imp___endthread));
}

