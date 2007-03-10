#include "user32.h"
void _elfimplib_RemovePropA() asm("RemovePropA");
void *_imp__RemovePropA = NULL;
__attribute__((constructor)) void _elfimplib_init_RemovePropA() {
load_dll_user32();
_imp__RemovePropA = (void *) _elf_GetProcAddress(_dll_user32, "RemovePropA");
}
void _elfimplib_RemovePropA() {
asm("leave\njmp *%0" : : "r"(_imp__RemovePropA));
}

