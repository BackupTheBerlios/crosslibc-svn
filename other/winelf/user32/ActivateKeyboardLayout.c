#include "user32.h"
void _elfimplib_ActivateKeyboardLayout() asm("ActivateKeyboardLayout");
void *_imp__ActivateKeyboardLayout = NULL;
__attribute__((constructor)) void _elfimplib_init_ActivateKeyboardLayout() {
load_dll_user32();
_imp__ActivateKeyboardLayout = (void *) _elf_GetProcAddress(_dll_user32, "ActivateKeyboardLayout");
}
void _elfimplib_ActivateKeyboardLayout() {
asm("leave\njmp *%0" : : "r"(_imp__ActivateKeyboardLayout));
}

