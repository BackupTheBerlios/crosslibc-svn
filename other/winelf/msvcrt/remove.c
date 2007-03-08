#include "msvcrt.h"
void _elfimplib_remove() asm("remove");
void *_imp__remove = NULL;
__attribute__((constructor)) void _elfimplib_init_remove() {
load_dll_msvcrt();
_imp__remove = (void *) _elf_GetProcAddress(_dll_msvcrt, "remove");
}
void _elfimplib_remove() {
asm("leave\njmp *%0" : : "r"(_imp__remove));
}

