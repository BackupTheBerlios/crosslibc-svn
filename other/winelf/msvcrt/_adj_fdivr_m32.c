#include "msvcrt.h"
void _elfimplib__adj_fdivr_m32() asm("adj_fdivr_m32");
void *_imp___adj_fdivr_m32 = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fdivr_m32() {
load_dll_msvcrt();
_imp___adj_fdivr_m32 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fdivr_m32");
}
void _elfimplib__adj_fdivr_m32() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32));
}

void _elfimplibmang__adj_fdivr_m32() asm("_adj_fdivr_m32");
void _elfimplibmang__adj_fdivr_m32() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fdivr_m32));
}

