#include "msvcrt.h"
void _elfimplib_fwscanf() asm("fwscanf");
void *_imp__fwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_fwscanf() {
load_dll_msvcrt();
_imp__fwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwscanf");
}
void _elfimplib_fwscanf() {
asm("leave\njmp *%0" : : "r"(_imp__fwscanf));
}

