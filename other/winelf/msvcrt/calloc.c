#include "msvcrt.h"
void _elfimplib_calloc() asm("calloc");
void *_imp__calloc = NULL;
__attribute__((constructor)) void _elfimplib_init_calloc() {
load_dll_msvcrt();
_imp__calloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "calloc");
}
void _elfimplib_calloc() {
asm("leave\njmp *%0" : : "r"(_imp__calloc));
}

