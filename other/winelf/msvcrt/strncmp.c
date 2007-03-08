#include "msvcrt.h"
void _elfimplib_strncmp() asm("strncmp");
void *_imp__strncmp = NULL;
__attribute__((constructor)) void _elfimplib_init_strncmp() {
load_dll_msvcrt();
_imp__strncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncmp");
}
void _elfimplib_strncmp() {
asm("leave\njmp *%0" : : "r"(_imp__strncmp));
}

