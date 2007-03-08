#include "msvcrt.h"
void _elfimplib_memcpy() asm("memcpy");
void *_imp__memcpy = NULL;
__attribute__((constructor)) void _elfimplib_init_memcpy() {
load_dll_msvcrt();
_imp__memcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "memcpy");
}
void _elfimplib_memcpy() {
asm("leave\njmp *%0" : : "r"(_imp__memcpy));
}

