#include "user32.h"
void _elfimplib_LoadMenuIndirectW() asm("LoadMenuIndirectW");
void *_imp__LoadMenuIndirectW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadMenuIndirectW() {
load_dll_user32();
_imp__LoadMenuIndirectW = (void *) _elf_GetProcAddress(_dll_user32, "LoadMenuIndirectW");
}
void _elfimplib_LoadMenuIndirectW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadMenuIndirectW));
}

