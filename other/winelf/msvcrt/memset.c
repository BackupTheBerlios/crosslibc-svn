#include "msvcrt.h"
void _elfimplib_memset() asm("memset");
void *_imp__memset = NULL;
__attribute__((constructor)) void _elfimplib_init_memset() {
load_dll_msvcrt();
_imp__memset = (void *) _elf_GetProcAddress(_dll_msvcrt, "memset");
}
void _elfimplib_memset() {
asm("leave\njmp *%0" : : "r"(_imp__memset));
}

