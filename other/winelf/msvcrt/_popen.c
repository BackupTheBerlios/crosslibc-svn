#include "msvcrt.h"
void _elfimplib__popen() asm("popen");
void *_imp___popen = NULL;
__attribute__((constructor)) void _elfimplib_init__popen() {
load_dll_msvcrt();
_imp___popen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_popen");
}
void _elfimplib__popen() {
asm("leave\njmp *%0" : : "r"(_imp___popen));
}

