#include "user32.h"
void _elfimplib_LoadKeyboardLayoutW() asm("LoadKeyboardLayoutW");
void *_imp__LoadKeyboardLayoutW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadKeyboardLayoutW() {
load_dll_user32();
_imp__LoadKeyboardLayoutW = (void *) _elf_GetProcAddress(_dll_user32, "LoadKeyboardLayoutW");
}
void _elfimplib_LoadKeyboardLayoutW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadKeyboardLayoutW));
}

