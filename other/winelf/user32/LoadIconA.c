#include "user32.h"
void _elfimplib_LoadIconA() asm("LoadIconA");
void *_imp__LoadIconA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadIconA() {
load_dll_user32();
_imp__LoadIconA = (void *) _elf_GetProcAddress(_dll_user32, "LoadIconA");
}
void _elfimplib_LoadIconA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadIconA));
}

