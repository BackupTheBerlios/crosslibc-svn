#include "msvcrt.h"
void _elfimplib_swscanf() asm("swscanf");
void *_imp__swscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_swscanf() {
load_dll_msvcrt();
_imp__swscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swscanf");
}
void _elfimplib_swscanf() {
asm("leave\njmp *%0" : : "r"(_imp__swscanf));
}

