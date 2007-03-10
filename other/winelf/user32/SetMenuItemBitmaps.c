#include "user32.h"
void _elfimplib_SetMenuItemBitmaps() asm("SetMenuItemBitmaps");
void *_imp__SetMenuItemBitmaps = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuItemBitmaps() {
load_dll_user32();
_imp__SetMenuItemBitmaps = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuItemBitmaps");
}
void _elfimplib_SetMenuItemBitmaps() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuItemBitmaps));
}

