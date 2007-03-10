#include "user32.h"
void _elfimplib_SetMenu() asm("SetMenu");
void *_imp__SetMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenu() {
load_dll_user32();
_imp__SetMenu = (void *) _elf_GetProcAddress(_dll_user32, "SetMenu");
}
void _elfimplib_SetMenu() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenu));
}

