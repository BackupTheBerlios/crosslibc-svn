#include "user32.h"
void _elfimplib_EnumDisplayDevicesW() asm("EnumDisplayDevicesW");
void *_imp__EnumDisplayDevicesW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplayDevicesW() {
load_dll_user32();
_imp__EnumDisplayDevicesW = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplayDevicesW");
}
void _elfimplib_EnumDisplayDevicesW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplayDevicesW));
}

