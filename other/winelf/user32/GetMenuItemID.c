#include "user32.h"
void _elfimplib_GetMenuItemID() asm("GetMenuItemID");
void *_imp__GetMenuItemID = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuItemID() {
load_dll_user32();
_imp__GetMenuItemID = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuItemID");
}
void _elfimplib_GetMenuItemID() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuItemID));
}

