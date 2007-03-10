#include "user32.h"
void _elfimplib_LoadImageA() asm("LoadImageA");
void *_imp__LoadImageA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadImageA() {
load_dll_user32();
_imp__LoadImageA = (void *) _elf_GetProcAddress(_dll_user32, "LoadImageA");
}
void _elfimplib_LoadImageA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadImageA));
}

