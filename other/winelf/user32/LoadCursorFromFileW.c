#include "user32.h"
void _elfimplib_LoadCursorFromFileW() asm("LoadCursorFromFileW");
void *_imp__LoadCursorFromFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadCursorFromFileW() {
load_dll_user32();
_imp__LoadCursorFromFileW = (void *) _elf_GetProcAddress(_dll_user32, "LoadCursorFromFileW");
}
void _elfimplib_LoadCursorFromFileW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadCursorFromFileW));
}

