#include "user32.h"
void _elfimplib_LoadKeyboardLayoutEx() asm("LoadKeyboardLayoutEx");
void *_imp__LoadKeyboardLayoutEx = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadKeyboardLayoutEx() {
load_dll_user32();
_imp__LoadKeyboardLayoutEx = (void *) _elf_GetProcAddress(_dll_user32, "LoadKeyboardLayoutEx");
}
void _elfimplib_LoadKeyboardLayoutEx() {
asm("leave\njmp *%0" : : "r"(_imp__LoadKeyboardLayoutEx));
}

