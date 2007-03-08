#include "msvcrt.h"
void _elfimplib__adj_fprem() asm("adj_fprem");
void *_imp___adj_fprem = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fprem() {
load_dll_msvcrt();
_imp___adj_fprem = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem");
}
void _elfimplib__adj_fprem() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem));
}

