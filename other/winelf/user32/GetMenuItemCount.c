#include "user32.h"
void _elfimplib_GetMenuItemCount() asm("GetMenuItemCount");
void *_imp__GetMenuItemCount = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuItemCount() {
load_dll_user32();
_imp__GetMenuItemCount = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuItemCount");
}
void _elfimplib_GetMenuItemCount() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuItemCount));
}

