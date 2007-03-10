#include "msvcrt.h"
void _elfimplib__findclose() asm("findclose");
void *_imp___findclose = NULL;
__attribute__((constructor)) void _elfimplib_init__findclose() {
load_dll_msvcrt();
_imp___findclose = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findclose");
}
void _elfimplib__findclose() {
asm("leave\njmp *%0" : : "r"(_imp___findclose));
}

void _elfimplibmang__findclose() asm("_findclose");
void _elfimplibmang__findclose() {
asm("leave\njmp *%0" : : "r"(_imp___findclose));
}

