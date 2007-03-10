#include "msvcrt.h"
void _elfimplib__adj_fprem1() asm("adj_fprem1");
void *_imp___adj_fprem1 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fprem1() {
load_dll_msvcrt();
_imp___adj_fprem1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fprem1");
}
void _elfimplib__adj_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem1));
}

void _elfimplibmang__adj_fprem1() asm("_adj_fprem1");
void _elfimplibmang__adj_fprem1() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fprem1));
}

