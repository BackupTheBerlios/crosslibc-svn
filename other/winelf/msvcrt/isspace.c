#include "msvcrt.h"
void _elfimplib_isspace() asm("isspace");
void *_imp__isspace = NULL;
__attribute__((constructor)) void _elfimplib_init_isspace() {
load_dll_msvcrt();
_imp__isspace = (void *) _elf_GetProcAddress(_dll_msvcrt, "isspace");
}
void _elfimplib_isspace() {
asm("leave\njmp *%0" : : "r"(_imp__isspace));
}

