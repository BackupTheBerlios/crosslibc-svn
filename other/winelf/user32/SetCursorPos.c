#include "user32.h"
void _elfimplib_SetCursorPos() asm("SetCursorPos");
void *_imp__SetCursorPos = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCursorPos() {
load_dll_user32();
_imp__SetCursorPos = (void *) _elf_GetProcAddress(_dll_user32, "SetCursorPos");
}
void _elfimplib_SetCursorPos() {
asm("leave\njmp *%0" : : "r"(_imp__SetCursorPos));
}

