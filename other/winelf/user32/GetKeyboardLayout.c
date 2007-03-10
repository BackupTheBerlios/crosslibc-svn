#include "user32.h"
void _elfimplib_GetKeyboardLayout() asm("GetKeyboardLayout");
void *_imp__GetKeyboardLayout = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyboardLayout() {
load_dll_user32();
_imp__GetKeyboardLayout = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyboardLayout");
}
void _elfimplib_GetKeyboardLayout() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyboardLayout));
}

