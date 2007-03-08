#include "msvcrt.h"
void _elfimplib_memchr() asm("memchr");
void *_imp__memchr = NULL;
__attribute__((constructor)) void _elfimplib_init_memchr() {
load_dll_msvcrt();
_imp__memchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "memchr");
}
void _elfimplib_memchr() {
asm("leave\njmp *%0" : : "r"(_imp__memchr));
}

