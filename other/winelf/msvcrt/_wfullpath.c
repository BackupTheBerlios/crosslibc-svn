#include "msvcrt.h"
void _elfimplib__wfullpath() asm("wfullpath");
void *_imp___wfullpath = NULL;
__attribute__((constructor)) void _elfimplib_init__wfullpath() {
load_dll_msvcrt();
_imp___wfullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfullpath");
}
void _elfimplib__wfullpath() {
asm("leave\njmp *%0" : : "r"(_imp___wfullpath));
}

