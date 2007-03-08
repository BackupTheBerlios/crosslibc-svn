#include "msvcrt.h"
void _elfimplib__read() asm("read");
void *_imp___read = NULL;
__attribute__((constructor)) void _elfimplib_init__read() {
load_dll_msvcrt();
_imp___read = (void *) _elf_GetProcAddress(_dll_msvcrt, "_read");
}
void _elfimplib__read() {
asm("leave\njmp *%0" : : "r"(_imp___read));
}

