#include "user32.h"
void _elfimplib_GetKeyboardState() asm("GetKeyboardState");
void *_imp__GetKeyboardState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardState() {
load_dll_user32();
_imp__GetKeyboardState = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardState");
}
void _elfimplib_GetKeyboardState() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardState));
}

