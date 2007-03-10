#include "user32.h"
void _elfimplib_LoadCursorFromFileA() asm("LoadCursorFromFileA");
void *_imp__LoadCursorFromFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadCursorFromFileA() {
load_dll_user32();
_imp__LoadCursorFromFileA = (void *) _elf_GetProcAddress(_dll_user32, "LoadCursorFromFileA");
}
void _elfimplib_LoadCursorFromFileA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadCursorFromFileA));
}

