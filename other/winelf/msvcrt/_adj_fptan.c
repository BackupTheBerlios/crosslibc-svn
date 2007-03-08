#include "msvcrt.h"
void _elfimplib__adj_fptan() asm("adj_fptan");
void *_imp___adj_fptan = NULL;
__attribute__((constructor)) void _elfimplib_init__adj_fptan() {
load_dll_msvcrt();
_imp___adj_fptan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adj_fptan");
}
void _elfimplib__adj_fptan() {
asm("leave\njmp *%0" : : "r"(_imp___adj_fptan));
}

