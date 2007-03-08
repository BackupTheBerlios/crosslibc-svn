#include "msvcrt.h"
void _elfimplib__wstati64() asm("wstati64");
void *_imp___wstati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wstati64() {
load_dll_msvcrt();
_imp___wstati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstati64");
}
void _elfimplib__wstati64() {
asm("leave\njmp *%0" : : "r"(_imp___wstati64));
}

