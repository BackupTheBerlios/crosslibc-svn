#include "user32.h"
void _elfimplib_GetProcessDefaultLayout() asm("GetProcessDefaultLayout");
void *_imp__GetProcessDefaultLayout = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessDefaultLayout() {
load_dll_user32();
_imp__GetProcessDefaultLayout = (void *) _elf_GetProcAddress(_dll_user32, "GetProcessDefaultLayout");
}
void _elfimplib_GetProcessDefaultLayout() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessDefaultLayout));
}

