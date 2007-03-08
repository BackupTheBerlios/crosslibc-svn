#include "msvcrt.h"
void _elfimplib_fputs() asm("fputs");
void *_imp__fputs = NULL;
__attribute__((constructor)) void _elfimplib_init_fputs() {
load_dll_msvcrt();
_imp__fputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputs");
}
void _elfimplib_fputs() {
asm("leave\njmp *%0" : : "r"(_imp__fputs));
}

