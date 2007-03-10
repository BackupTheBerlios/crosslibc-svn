#include "user32.h"
void _elfimplib_LoadBitmapW() asm("LoadBitmapW");
void *_imp__LoadBitmapW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadBitmapW() {
load_dll_user32();
_imp__LoadBitmapW = (void *) _elf_GetProcAddress(_dll_user32, "LoadBitmapW");
}
void _elfimplib_LoadBitmapW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadBitmapW));
}

