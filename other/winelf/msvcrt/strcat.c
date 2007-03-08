#include "msvcrt.h"
void _elfimplib_strcat() asm("strcat");
void *_imp__strcat = NULL;
__attribute__((constructor)) void _elfimplib_init_strcat() {
load_dll_msvcrt();
_imp__strcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strcat");
}
void _elfimplib_strcat() {
asm("leave\njmp *%0" : : "r"(_imp__strcat));
}

