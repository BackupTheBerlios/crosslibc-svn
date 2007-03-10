#include "user32.h"
void _elfimplib_SetSystemMenu() asm("SetSystemMenu");
void *_imp__SetSystemMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemMenu() {
load_dll_user32();
_imp__SetSystemMenu = (void *) _elf_GetProcAddress(_dll_user32, "SetSystemMenu");
}
void _elfimplib_SetSystemMenu() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemMenu));
}

