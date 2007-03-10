#include "user32.h"
void _elfimplib_EnumDisplayDevicesA() asm("EnumDisplayDevicesA");
void *_imp__EnumDisplayDevicesA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplayDevicesA() {
load_dll_user32();
_imp__EnumDisplayDevicesA = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplayDevicesA");
}
void _elfimplib_EnumDisplayDevicesA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplayDevicesA));
}

