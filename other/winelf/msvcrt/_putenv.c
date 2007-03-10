#include "msvcrt.h"
void _elfimplib__putenv() asm("putenv");
void *_imp___putenv = NULL;
__attribute__((constructor)) void _elfimplib_init__putenv() {
load_dll_msvcrt();
_imp___putenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putenv");
}
void _elfimplib__putenv() {
asm("leave\njmp *%0" : : "r"(_imp___putenv));
}

void _elfimplibmang__putenv() asm("_putenv");
void _elfimplibmang__putenv() {
asm("leave\njmp *%0" : : "r"(_imp___putenv));
}

