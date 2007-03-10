#include "msvcrt.h"
void _elfimplib__swab() asm("swab");
void *_imp___swab = NULL;
__attribute__((constructor)) void _elfimplib_init__swab() {
load_dll_msvcrt();
_imp___swab = (void *) _elf_GetProcAddress(_dll_msvcrt, "_swab");
}
void _elfimplib__swab() {
asm("leave\njmp *%0" : : "r"(_imp___swab));
}

void _elfimplibmang__swab() asm("_swab");
void _elfimplibmang__swab() {
asm("leave\njmp *%0" : : "r"(_imp___swab));
}

