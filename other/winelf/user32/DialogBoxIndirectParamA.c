#include "user32.h"
void _elfimplib_DialogBoxIndirectParamA() asm("DialogBoxIndirectParamA");
void *_imp__DialogBoxIndirectParamA = NULL;
__attribute__((constructor)) void _elfimplib_init_DialogBoxIndirectParamA() {
load_dll_user32();
_imp__DialogBoxIndirectParamA = (void *) _elf_GetProcAddress(_dll_user32, "DialogBoxIndirectParamA");
}
void _elfimplib_DialogBoxIndirectParamA() {
asm("leave\njmp *%0" : : "r"(_imp__DialogBoxIndirectParamA));
}

