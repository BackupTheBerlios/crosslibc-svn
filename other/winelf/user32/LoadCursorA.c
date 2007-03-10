#include "user32.h"
void _elfimplib_LoadCursorA() asm("LoadCursorA");
void *_imp__LoadCursorA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadCursorA() {
load_dll_user32();
_imp__LoadCursorA = (void *) _elf_GetProcAddress(_dll_user32, "LoadCursorA");
}
void _elfimplib_LoadCursorA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadCursorA));
}

