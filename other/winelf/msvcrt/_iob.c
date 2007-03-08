#include "msvcrt.h"
void _elfimplib__iob() asm("iob");
void *_imp___iob = NULL;
__attribute__((constructor)) void _elfimplib_init__iob() {
load_dll_msvcrt();
_imp___iob = (void *) _elf_GetProcAddress(_dll_msvcrt, "_iob");
}
void _elfimplib__iob() {
asm("leave\njmp *%0" : : "r"(_imp___iob));
}

