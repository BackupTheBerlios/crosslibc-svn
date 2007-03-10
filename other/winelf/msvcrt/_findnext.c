#include "msvcrt.h"
void _elfimplib__findnext() asm("findnext");
void *_imp___findnext = NULL;
__attribute__((constructor)) void _elfimplib_init__findnext() {
load_dll_msvcrt();
_imp___findnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext");
}
void _elfimplib__findnext() {
asm("leave\njmp *%0" : : "r"(_imp___findnext));
}

void _elfimplibmang__findnext() asm("_findnext");
void _elfimplibmang__findnext() {
asm("leave\njmp *%0" : : "r"(_imp___findnext));
}

