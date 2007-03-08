#include "msvcrt.h"
void _elfimplib_fopen() asm("fopen");
void *_imp__fopen = NULL;
__attribute__((constructor)) void _elfimplib_init_fopen() {
load_dll_msvcrt();
_imp__fopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "fopen");
}
void _elfimplib_fopen() {
asm("leave\njmp *%0" : : "r"(_imp__fopen));
}

