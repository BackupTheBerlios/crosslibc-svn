#include "user32.h"
void _elfimplib_LoadBitmapA() asm("LoadBitmapA");
void *_imp__LoadBitmapA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadBitmapA() {
load_dll_user32();
_imp__LoadBitmapA = (void *) _elf_GetProcAddress(_dll_user32, "LoadBitmapA");
}
void _elfimplib_LoadBitmapA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadBitmapA));
}

