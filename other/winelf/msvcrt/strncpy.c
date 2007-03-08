#include "msvcrt.h"
void _elfimplib_strncpy() asm("strncpy");
void *_imp__strncpy = NULL;
__attribute__((constructor)) void _elfimplib_init_strncpy() {
load_dll_msvcrt();
_imp__strncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncpy");
}
void _elfimplib_strncpy() {
asm("leave\njmp *%0" : : "r"(_imp__strncpy));
}

