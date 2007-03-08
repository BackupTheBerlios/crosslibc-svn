#include "msvcrt.h"
void _elfimplib__wremove() asm("wremove");
void *_imp___wremove = NULL;
__attribute__((constructor)) void _elfimplib_init__wremove() {
load_dll_msvcrt();
_imp___wremove = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wremove");
}
void _elfimplib__wremove() {
asm("leave\njmp *%0" : : "r"(_imp___wremove));
}

