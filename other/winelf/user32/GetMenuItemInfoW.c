#include "user32.h"
void _elfimplib_GetMenuItemInfoW() asm("GetMenuItemInfoW");
void *_imp__GetMenuItemInfoW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuItemInfoW() {
load_dll_user32();
_imp__GetMenuItemInfoW = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuItemInfoW");
}
void _elfimplib_GetMenuItemInfoW() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuItemInfoW));
}

