#include "msvcrt.h"
void _elfimplib_feof() asm("feof");
void *_imp__feof = NULL;
__attribute__((constructor)) void _elfimplib_init_feof() {
load_dll_msvcrt();
_imp__feof = (void *) _elf_GetProcAddress(_dll_msvcrt, "feof");
}
void _elfimplib_feof() {
asm("leave\njmp *%0" : : "r"(_imp__feof));
}

