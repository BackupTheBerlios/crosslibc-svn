#include "msvcrt.h"
void _elfimplib_realloc() asm("realloc");
void *_imp__realloc = NULL;
__attribute__((constructor)) void _elfimplib_init_realloc() {
load_dll_msvcrt();
_imp__realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "realloc");
}
void _elfimplib_realloc() {
asm("leave\njmp *%0" : : "r"(_imp__realloc));
}

