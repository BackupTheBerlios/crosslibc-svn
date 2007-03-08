#include "msvcrt.h"
void _elfimplib_memcmp() asm("memcmp");
void *_imp__memcmp = NULL;
__attribute__((constructor)) void _elfimplib_init_memcmp() {
load_dll_msvcrt();
_imp__memcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcmp");
}
void _elfimplib_memcmp() {
asm("leave\njmp *%0" : : "r"(_imp__memcmp));
}

