#include "user32.h"
void _elfimplib_GetSubMenu() asm("GetSubMenu");
void *_imp__GetSubMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSubMenu() {
load_dll_user32();
_imp__GetSubMenu = (void *) _elf_GetProcAddress(_dll_user32, "GetSubMenu");
}
void _elfimplib_GetSubMenu() {
asm("leave\njmp *%0" : : "r"(_imp__GetSubMenu));
}

