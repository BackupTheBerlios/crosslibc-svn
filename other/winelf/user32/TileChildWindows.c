#include "user32.h"
void _elfimplib_TileChildWindows() asm("TileChildWindows");
void *_imp__TileChildWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_TileChildWindows() {
load_dll_user32();
_imp__TileChildWindows = (void *) _elf_GetProcAddress(_dll_user32, "TileChildWindows");
}
void _elfimplib_TileChildWindows() {
asm("leave\njmp *%0" : : "r"(_imp__TileChildWindows));
}

