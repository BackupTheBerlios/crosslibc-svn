#include "user32.h"
void _elfimplib_GetMenuState() asm("GetMenuState");
void *_imp__GetMenuState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuState() {
load_dll_user32();
_imp__GetMenuState = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuState");
}
void _elfimplib_GetMenuState() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuState));
}

