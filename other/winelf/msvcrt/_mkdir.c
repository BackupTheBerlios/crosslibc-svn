#include "msvcrt.h"
void _elfimplib__mkdir() asm("mkdir");
void *_imp___mkdir = NULL;
__attribute__((constructor)) void _elfimplib_init__mkdir() {
load_dll_msvcrt();
_imp___mkdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mkdir");
}
void _elfimplib__mkdir() {
asm("leave\njmp *%0" : : "r"(_imp___mkdir));
}

