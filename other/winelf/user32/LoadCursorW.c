#include "user32.h"
void _elfimplib_LoadCursorW() asm("LoadCursorW");
void *_imp__LoadCursorW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadCursorW() {
load_dll_user32();
_imp__LoadCursorW = (void *) _elf_GetProcAddress(_dll_user32, "LoadCursorW");
}
void _elfimplib_LoadCursorW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadCursorW));
}

