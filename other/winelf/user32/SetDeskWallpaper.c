#include "user32.h"
void _elfimplib_SetDeskWallpaper() asm("SetDeskWallpaper");
void *_imp__SetDeskWallpaper = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDeskWallpaper() {
load_dll_user32();
_imp__SetDeskWallpaper = (void *) _elf_GetProcAddress(_dll_user32, "SetDeskWallpaper");
}
void _elfimplib_SetDeskWallpaper() {
asm("leave\njmp *%0" : : "r"(_imp__SetDeskWallpaper));
}

