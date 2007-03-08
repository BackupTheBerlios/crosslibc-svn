#include "msvcrt.h"
void _elfimplib__putch() asm("putch");
void *_imp___putch = NULL;
__attribute__((constructor)) void _elfimplib_init__putch() {
load_dll_msvcrt();
_imp___putch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putch");
}
void _elfimplib__putch() {
asm("leave\njmp *%0" : : "r"(_imp___putch));
}

