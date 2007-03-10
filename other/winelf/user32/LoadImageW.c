#include "user32.h"
void _elfimplib_LoadImageW() asm("LoadImageW");
void *_imp__LoadImageW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadImageW() {
load_dll_user32();
_imp__LoadImageW = (void *) _elf_GetProcAddress(_dll_user32, "LoadImageW");
}
void _elfimplib_LoadImageW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadImageW));
}

