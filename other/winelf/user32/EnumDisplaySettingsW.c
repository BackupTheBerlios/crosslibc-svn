#include "user32.h"
void _elfimplib_EnumDisplaySettingsW() asm("EnumDisplaySettingsW");
void *_imp__EnumDisplaySettingsW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplaySettingsW() {
load_dll_user32();
_imp__EnumDisplaySettingsW = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplaySettingsW");
}
void _elfimplib_EnumDisplaySettingsW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplaySettingsW));
}

