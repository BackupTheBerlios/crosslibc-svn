#include "user32.h"
void _elfimplib_UnloadKeyboardLayout() asm("UnloadKeyboardLayout");
void *_imp__UnloadKeyboardLayout = NULL;
__attribute__((constructor)) void _elfimplib_init_UnloadKeyboardLayout() {
load_dll_user32();
_imp__UnloadKeyboardLayout = (void *) _elf_GetProcAddress(_dll_user32, "UnloadKeyboardLayout");
}
void _elfimplib_UnloadKeyboardLayout() {
asm("leave\njmp *%0" : : "r"(_imp__UnloadKeyboardLayout));
}

