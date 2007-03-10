#include "user32.h"
void _elfimplib_LoadMenuA() asm("LoadMenuA");
void *_imp__LoadMenuA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadMenuA() {
load_dll_user32();
_imp__LoadMenuA = (void *) _elf_GetProcAddress(_dll_user32, "LoadMenuA");
}
void _elfimplib_LoadMenuA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadMenuA));
}

