#include "msvcrt.h"
void _elfimplib__adj_fdiv_r() asm("adj_fdiv_r");
void *_imp___adj_fdiv_r = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdiv_r() {
load_dll_msvcrt();
_imp___adj_fdiv_r = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdiv_r");
}
void _elfimplib__adj_fdiv_r() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_r));
}

void _elfimplibmang__adj_fdiv_r() asm("_adj_fdiv_r");
void _elfimplibmang__adj_fdiv_r() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdiv_r));
}

