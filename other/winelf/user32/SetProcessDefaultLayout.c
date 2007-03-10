#include "user32.h"
void _elfimplib_SetProcessDefaultLayout() asm("SetProcessDefaultLayout");
void *_imp__SetProcessDefaultLayout = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessDefaultLayout() {
load_dll_user32();
_imp__SetProcessDefaultLayout = (void *) _elf_GetProcAddress(_dll_user32, "SetProcessDefaultLayout");
}
void _elfimplib_SetProcessDefaultLayout() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessDefaultLayout));
}

