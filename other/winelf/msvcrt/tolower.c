#include "msvcrt.h"
void _elfimplib_tolower() asm("tolower");
void *_imp__tolower = NULL;
__attribute__((constructor)) void _elfimplib_init_tolower() {
load_dll_msvcrt();
_imp__tolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "tolower");
}
void _elfimplib_tolower() {
asm("leave\njmp *%0" : : "r"(_imp__tolower));
}

