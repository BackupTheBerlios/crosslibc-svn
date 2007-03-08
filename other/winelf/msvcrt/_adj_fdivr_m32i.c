#include "msvcrt.h"
void _elfimplib__adj_fdivr_m32i() asm("adj_fdivr_m32i");
void *_imp___adj_fdivr_m32i = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m32i() {
load_dll_msvcrt();
_imp___adj_fdivr_m32i = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32i");
}
void _elfimplib__adj_fdivr_m32i() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32i));
}

