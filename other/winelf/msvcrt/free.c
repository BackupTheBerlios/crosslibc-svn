#include "msvcrt.h"
void _elfimplib_free() asm("free");
void *_imp__free = NULL;
__attribute__((constructor)) void _elfimplib_init_free() {
load_dll_msvcrt();
_imp__free = (void *) _elf_GetProcAddress(_dll_msvcrt, "free");
}
void _elfimplib_free() {
asm("leave\njmp *%0" : : "r"(_imp__free));
}

