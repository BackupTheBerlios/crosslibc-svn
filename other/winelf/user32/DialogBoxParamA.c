#include "user32.h"
void _elfimplib_DialogBoxParamA() asm("DialogBoxParamA");
void *_imp__DialogBoxParamA = NULL;
__attribute__((constructor)) void _elfimplib_init_DialogBoxParamA() {
load_dll_user32();
_imp__DialogBoxParamA = (void *) _elf_GetProcAddress(_dll_user32, "DialogBoxParamA");
}
void _elfimplib_DialogBoxParamA() {
asm("leave\njmp *%0" : : "r"(_imp__DialogBoxParamA));
}

