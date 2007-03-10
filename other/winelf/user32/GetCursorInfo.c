#include "user32.h"
void _elfimplib_GetCursorInfo() asm("GetCursorInfo");
void *_imp__GetCursorInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCursorInfo() {
load_dll_user32();
_imp__GetCursorInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetCursorInfo");
}
void _elfimplib_GetCursorInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetCursorInfo));
}

