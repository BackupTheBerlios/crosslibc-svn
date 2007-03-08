#include "msvcrt.h"
void _elfimplib_sscanf() asm("sscanf");
void *_imp__sscanf = NULL;
__attribute__((constructor)) void _elfimplib_init_sscanf() {
load_dll_msvcrt();
_imp__sscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "sscanf");
}
void _elfimplib_sscanf() {
asm("leave\njmp *%0" : : "r"(_imp__sscanf));
}

