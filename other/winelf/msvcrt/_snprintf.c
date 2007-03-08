#include "msvcrt.h"
void _elfimplib__snprintf() asm("snprintf");
void *_imp___snprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__snprintf() {
load_dll_msvcrt();
_imp___snprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snprintf");
}
void _elfimplib__snprintf() {
asm("leave\njmp *%0" : : "r"(_imp___snprintf));
}

