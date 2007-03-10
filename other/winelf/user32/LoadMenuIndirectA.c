#include "user32.h"
void _elfimplib_LoadMenuIndirectA() asm("LoadMenuIndirectA");
void *_imp__LoadMenuIndirectA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadMenuIndirectA() {
load_dll_user32();
_imp__LoadMenuIndirectA = (void *) _elf_GetProcAddress(_dll_user32, "LoadMenuIndirectA");
}
void _elfimplib_LoadMenuIndirectA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadMenuIndirectA));
}

