#include "msvcrt.h"
void _elfimplib_freopen() asm("freopen");
void *_imp__freopen = NULL;
__attribute__((constructor)) void _elfimplib_init_freopen() {
load_dll_msvcrt();
_imp__freopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "freopen");
}
void _elfimplib_freopen() {
asm("leave\njmp *%0" : : "r"(_imp__freopen));
}

