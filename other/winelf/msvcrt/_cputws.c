#include "msvcrt.h"
void _elfimplib__cputws() asm("cputws");
void *_imp___cputws = NULL;
__attribute__((constructor)) void _elfimplib_init__cputws() {
load_dll_msvcrt();
_imp___cputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputws");
}
void _elfimplib__cputws() {
asm("leave\njmp *%0" : : "r"(_imp___cputws));
}

