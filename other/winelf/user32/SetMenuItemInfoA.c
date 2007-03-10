#include "user32.h"
void _elfimplib_SetMenuItemInfoA() asm("SetMenuItemInfoA");
void *_imp__SetMenuItemInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuItemInfoA() {
load_dll_user32();
_imp__SetMenuItemInfoA = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuItemInfoA");
}
void _elfimplib_SetMenuItemInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuItemInfoA));
}

