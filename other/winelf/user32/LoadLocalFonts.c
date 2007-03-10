#include "user32.h"
void _elfimplib_LoadLocalFonts() asm("LoadLocalFonts");
void *_imp__LoadLocalFonts = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLocalFonts() {
load_dll_user32();
_imp__LoadLocalFonts = (void *) _elf_GetProcAddress(_dll_user32, "LoadLocalFonts");
}
void _elfimplib_LoadLocalFonts() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLocalFonts));
}

