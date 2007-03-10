#include "user32.h"
void _elfimplib_SetSysColorsTemp() asm("SetSysColorsTemp");
void *_imp__SetSysColorsTemp = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSysColorsTemp() {
load_dll_user32();
_imp__SetSysColorsTemp = (void *) _elf_GetProcAddress(_dll_user32, "SetSysColorsTemp");
}
void _elfimplib_SetSysColorsTemp() {
asm("leave\njmp *%0" : : "r"(_imp__SetSysColorsTemp));
}

