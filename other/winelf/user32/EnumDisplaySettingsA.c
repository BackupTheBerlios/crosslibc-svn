#include "user32.h"
void _elfimplib_EnumDisplaySettingsA() asm("EnumDisplaySettingsA");
void *_imp__EnumDisplaySettingsA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplaySettingsA() {
load_dll_user32();
_imp__EnumDisplaySettingsA = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplaySettingsA");
}
void _elfimplib_EnumDisplaySettingsA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplaySettingsA));
}

