#include "msvcrt.h"
void _elfimplib__putws() asm("putws");
void *_imp___putws = NULL;
__attribute__((constructor)) void _elfimplib_init__putws() {
load_dll_msvcrt();
_imp___putws = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putws");
}
void _elfimplib__putws() {
asm("leave\njmp *%0" : : "r"(_imp___putws));
}

