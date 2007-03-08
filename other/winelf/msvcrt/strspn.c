#include "msvcrt.h"
void _elfimplib_strspn() asm("strspn");
void *_imp__strspn = NULL;
__attribute__((constructor)) void _elfimplib_init_strspn() {
load_dll_msvcrt();
_imp__strspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "strspn");
}
void _elfimplib_strspn() {
asm("leave\njmp *%0" : : "r"(_imp__strspn));
}

