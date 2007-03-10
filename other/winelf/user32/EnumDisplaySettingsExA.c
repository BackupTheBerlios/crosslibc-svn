#include "user32.h"
void _elfimplib_EnumDisplaySettingsExA() asm("EnumDisplaySettingsExA");
void *_imp__EnumDisplaySettingsExA = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDisplaySettingsExA() {
load_dll_user32();
_imp__EnumDisplaySettingsExA = (void *) _elf_GetProcAddress(_dll_user32, "EnumDisplaySettingsExA");
}
void _elfimplib_EnumDisplaySettingsExA() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDisplaySettingsExA));
}

