#include "user32.h"
void _elfimplib_GetMenuItemRect() asm("GetMenuItemRect");
void *_imp__GetMenuItemRect = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuItemRect() {
load_dll_user32();
_imp__GetMenuItemRect = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuItemRect");
}
void _elfimplib_GetMenuItemRect() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuItemRect));
}

