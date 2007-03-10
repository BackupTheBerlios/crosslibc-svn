#include "user32.h"
void _elfimplib_ChangeDisplaySettingsExW() asm("ChangeDisplaySettingsExW");
void *_imp__ChangeDisplaySettingsExW = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeDisplaySettingsExW() {
load_dll_user32();
_imp__ChangeDisplaySettingsExW = (void *) _elf_GetProcAddress(_dll_user32, "ChangeDisplaySettingsExW");
}
void _elfimplib_ChangeDisplaySettingsExW() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeDisplaySettingsExW));
}

