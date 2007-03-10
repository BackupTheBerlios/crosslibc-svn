#include "user32.h"
void _elfimplib_SetKeyboardState() asm("SetKeyboardState");
void *_imp__SetKeyboardState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetKeyboardState() {
load_dll_user32();
_imp__SetKeyboardState = (void *) _elf_GetProcAddress(_dll_user32, "SetKeyboardState");
}
void _elfimplib_SetKeyboardState() {
asm("leave\njmp *%0" : : "r"(_imp__SetKeyboardState));
}

