#include "msvcrt.h"
void _elfimplib_strpbrk() asm("strpbrk");
void *_imp__strpbrk = NULL;
__attribute__((constructor)) void _elfimplib_init_strpbrk() {
load_dll_msvcrt();
_imp__strpbrk = (void *) _elf_GetProcAddress(_dll_msvcrt, "strpbrk");
}
void _elfimplib_strpbrk() {
asm("leave\njmp *%0" : : "r"(_imp__strpbrk));
}

