#include "msvcrt.h"
void _elfimplib__chkesp() asm("chkesp");
void *_imp___chkesp = NULL;
__attribute__((constructor)) void _elfimplib_init__chkesp() {
load_dll_msvcrt();
_imp___chkesp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chkesp");
}
void _elfimplib__chkesp() {
asm("leave\njmp *%0" : : "r"(_imp___chkesp));
}

