#include "user32.h"
void _elfimplib_EnumDisplaySettingsExW() asm("EnumDisplaySettingsExW");
void *_imp__EnumDisplaySettingsExW = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplaySettingsExW() {
load_dll_user32();
_imp__EnumDisplaySettingsExW = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplaySettingsExW");
}
void _elfimplib_EnumDisplaySettingsExW() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplaySettingsExW));
}

