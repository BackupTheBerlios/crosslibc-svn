#include "user32.h"
void _elfimplib_ChangeDisplaySettingsW() asm("ChangeDisplaySettingsW");
void *_imp__ChangeDisplaySettingsW = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeDisplaySettingsW() {
load_dll_user32();
_imp__ChangeDisplaySettingsW = (void *) _elf_GetProcAddress(_dll_user32, "ChangeDisplaySettingsW");
}
void _elfimplib_ChangeDisplaySettingsW() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeDisplaySettingsW));
}

