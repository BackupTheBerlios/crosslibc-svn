#include "user32.h"
void _elfimplib_SetMenuItemInfoW() asm("SetMenuItemInfoW");
void *_imp__SetMenuItemInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuItemInfoW() {
load_dll_user32();
_imp__SetMenuItemInfoW = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuItemInfoW");
}
void _elfimplib_SetMenuItemInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuItemInfoW));
}

