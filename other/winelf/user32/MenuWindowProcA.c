#include "user32.h"
void _elfimplib_MenuWindowProcA() asm("MenuWindowProcA");
void *_imp__MenuWindowProcA = NULL;
__attribute__((constructor)) void _elfimplib_init_MenuWindowProcA() {
load_dll_user32();
_imp__MenuWindowProcA = (void *) _elf_GetProcAddress(_dll_user32, "MenuWindowProcA");
}
void _elfimplib_MenuWindowProcA() {
asm("leave\njmp *%0" : : "r"(_imp__MenuWindowProcA));
}

