#include "msvcrt.h"
void _elfimplib__adj_fpatan() asm("adj_fpatan");
void *_imp___adj_fpatan = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fpatan() {
load_dll_msvcrt();
_imp___adj_fpatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fpatan");
}
void _elfimplib__adj_fpatan() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fpatan));
}

void _elfimplibmang__adj_fpatan() asm("_adj_fpatan");
void _elfimplibmang__adj_fpatan() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fpatan));
}

