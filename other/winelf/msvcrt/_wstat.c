#include "msvcrt.h"
void _elfimplib__wstat() asm("wstat");
void *_imp___wstat = NULL;
__attribute__((constructor)) void _elfimplib_init__wstat() {
load_dll_msvcrt();
_imp___wstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstat");
}
void _elfimplib__wstat() {
asm("leave\njmp *%0" : : "r"(_imp___wstat));
}

