#include "msvcrt.h"
void _elfimplib__pclose() asm("pclose");
void *_imp___pclose = NULL;
__attribute__((constructor)) void _elfimplib_init__pclose() {
load_dll_msvcrt();
_imp___pclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_pclose");
}
void _elfimplib__pclose() {
asm("leave\njmp *%0" : : "r"(_imp___pclose));
}

