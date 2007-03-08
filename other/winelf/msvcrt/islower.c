#include "msvcrt.h"
void _elfimplib_islower() asm("islower");
void *_imp__islower = NULL;
__attribute__((constructor)) void _elfimplib_init_islower() {
load_dll_msvcrt();
_imp__islower = (void *) _elf_GetProcAddress(_dll_msvcrt, "islower");
}
void _elfimplib_islower() {
asm("leave\njmp *%0" : : "r"(_imp__islower));
}

