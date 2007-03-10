#include "user32.h"
void _elfimplib_DialogBoxIndirectParamAorW() asm("DialogBoxIndirectParamAorW");
void *_imp__DialogBoxIndirectParamAorW = NULL;
__attribute__((constructor)) void _elfimplib_init_DialogBoxIndirectParamAorW() {
load_dll_user32();
_imp__DialogBoxIndirectParamAorW = (void *) _elf_GetProcAddress(_dll_user32, "DialogBoxIndirectParamAorW");
}
void _elfimplib_DialogBoxIndirectParamAorW() {
asm("leave\njmp *%0" : : "r"(_imp__DialogBoxIndirectParamAorW));
}

