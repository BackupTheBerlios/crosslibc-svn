#include "msvcrt.h"
void _elfimplib_atof() asm("atof");
void *_imp__atof = NULL;
__attribute__((constructor)) void _elfimplib_init_atof() {
load_dll_msvcrt();
_imp__atof = (void *) _elf_GetProcAddress(_dll_msvcrt, "atof");
}
void _elfimplib_atof() {
asm("leave\njmp *%0" : : "r"(_imp__atof));
}

