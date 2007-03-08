#include "msvcrt.h"
void _elfimplib_strftime() asm("strftime");
void *_imp__strftime = NULL;
__attribute__((constructor)) void _elfimplib_init_strftime() {
load_dll_msvcrt();
_imp__strftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "strftime");
}
void _elfimplib_strftime() {
asm("leave\njmp *%0" : : "r"(_imp__strftime));
}

