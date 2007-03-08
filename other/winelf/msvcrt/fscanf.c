#include "msvcrt.h"
void _elfimplib_fscanf() asm("fscanf");
void *_imp__fscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_fscanf() {
load_dll_msvcrt();
_imp__fscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fscanf");
}
void _elfimplib_fscanf() {
asm("leave\njmp *%0" : : "r"(_imp__fscanf));
}

