#include "user32.h"
void _elfimplib_EnumDisplayMonitors() asm("EnumDisplayMonitors");
void *_imp__EnumDisplayMonitors = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplayMonitors() {
load_dll_user32();
_imp__EnumDisplayMonitors = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplayMonitors");
}
void _elfimplib_EnumDisplayMonitors() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplayMonitors));
}

