#include "user32.h"
void _elfimplib_LoadKeyboardLayoutA() asm("LoadKeyboardLayoutA");
void *_imp__LoadKeyboardLayoutA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadKeyboardLayoutA() {
load_dll_user32();
_imp__LoadKeyboardLayoutA = (void *) _elf_GetProcAddress(_dll_user32, "LoadKeyboardLayoutA");
}
void _elfimplib_LoadKeyboardLayoutA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadKeyboardLayoutA));
}

