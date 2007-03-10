#include "user32.h"
void _elfimplib_ChangeDisplaySettingsA() asm("ChangeDisplaySettingsA");
void *_imp__ChangeDisplaySettingsA = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeDisplaySettingsA() {
load_dll_user32();
_imp__ChangeDisplaySettingsA = (void *) _elf_GetProcAddress(_dll_user32, "ChangeDisplaySettingsA");
}
void _elfimplib_ChangeDisplaySettingsA() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeDisplaySettingsA));
}

