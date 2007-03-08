#include "msvcrt.h"
void _elfimplib__snwprintf() asm("snwprintf");
void *_imp___snwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__snwprintf() {
load_dll_msvcrt();
_imp___snwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwprintf");
}
void _elfimplib__snwprintf() {
asm("leave\njmp *%0" : : "r"(_imp___snwprintf));
}

