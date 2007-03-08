#include "msvcrt.h"
void _elfimplib_labs() asm("labs");
void *_imp__labs = NULL;
__attribute__((constructor)) void _elfimplib_init_labs() {
load_dll_msvcrt();
_imp__labs = (void *) _elf_GetProcAddress(_dll_msvcrt, "labs");
}
void _elfimplib_labs() {
asm("leave\njmp *%0" : : "r"(_imp__labs));
}

