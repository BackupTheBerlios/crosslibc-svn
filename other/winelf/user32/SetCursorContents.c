#include "user32.h"
void _elfimplib_SetCursorContents() asm("SetCursorContents");
void *_imp__SetCursorContents = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCursorContents() {
load_dll_user32();
_imp__SetCursorContents = (void *) _elf_GetProcAddress(_dll_user32, "SetCursorContents");
}
void _elfimplib_SetCursorContents() {
asm("leave\njmp *%0" : : "r"(_imp__SetCursorContents));
}

