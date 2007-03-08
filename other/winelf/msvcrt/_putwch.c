#include "msvcrt.h"
void _elfimplib__putwch() asm("putwch");
void *_imp___putwch = NULL;
__attribute__((constructor)) void _elfimplib_init__putwch() {
load_dll_msvcrt();
_imp___putwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putwch");
}
void _elfimplib__putwch() {
asm("leave\njmp *%0" : : "r"(_imp___putwch));
}

