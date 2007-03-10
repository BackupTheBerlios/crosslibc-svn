#include "user32.h"
void _elfimplib_ChangeDisplaySettingsExA() asm("ChangeDisplaySettingsExA");
void *_imp__ChangeDisplaySettingsExA = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeDisplaySettingsExA() {
load_dll_user32();
_imp__ChangeDisplaySettingsExA = (void *) _elf_GetProcAddress(_dll_user32, "ChangeDisplaySettingsExA");
}
void _elfimplib_ChangeDisplaySettingsExA() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeDisplaySettingsExA));
}

