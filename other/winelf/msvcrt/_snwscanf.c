#include "msvcrt.h"
void _elfimplib__snwscanf() asm("snwscanf");
void *_imp___snwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__snwscanf() {
load_dll_msvcrt();
_imp___snwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snwscanf");
}
void _elfimplib__snwscanf() {
asm("leave\njmp *%0" : : "r"(_imp___snwscanf));
}

