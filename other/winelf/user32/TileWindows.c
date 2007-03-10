#include "user32.h"
void _elfimplib_TileWindows() asm("TileWindows");
void *_imp__TileWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_TileWindows() {
load_dll_user32();
_imp__TileWindows = (void *) _elf_GetProcAddress(_dll_user32, "TileWindows");
}
void _elfimplib_TileWindows() {
asm("leave\njmp *%0" : : "r"(_imp__TileWindows));
}

