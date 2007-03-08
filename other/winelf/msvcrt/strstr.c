#include "msvcrt.h"
void _elfimplib_strstr() asm("strstr");
void *_imp__strstr = NULL;
__attribute__((constructor)) void _elfimplib_init_strstr() {
load_dll_msvcrt();
_imp__strstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "strstr");
}
void _elfimplib_strstr() {
asm("leave\njmp *%0" : : "r"(_imp__strstr));
}

