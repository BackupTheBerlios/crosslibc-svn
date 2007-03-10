#include "user32.h"
void _elfimplib_GetMenuItemInfoA() asm("GetMenuItemInfoA");
void *_imp__GetMenuItemInfoA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuItemInfoA() {
load_dll_user32();
_imp__GetMenuItemInfoA = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuItemInfoA");
}
void _elfimplib_GetMenuItemInfoA() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuItemInfoA));
}

