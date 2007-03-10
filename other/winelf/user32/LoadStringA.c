#include "user32.h"
void _elfimplib_LoadStringA() asm("LoadStringA");
void *_imp__LoadStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadStringA() {
load_dll_user32();
_imp__LoadStringA = (void *) _elf_GetProcAddress(_dll_user32, "LoadStringA");
}
void _elfimplib_LoadStringA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadStringA));
}

