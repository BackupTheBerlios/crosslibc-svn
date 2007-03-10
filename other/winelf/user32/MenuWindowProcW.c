#include "user32.h"
void _elfimplib_MenuWindowProcW() asm("MenuWindowProcW");
void *_imp__MenuWindowProcW = NULL;
__attribute__((constructor)) void _elfimplib_init_MenuWindowProcW() {
load_dll_user32();
_imp__MenuWindowProcW = (void *) _elf_GetProcAddress(_dll_user32, "MenuWindowProcW");
}
void _elfimplib_MenuWindowProcW() {
asm("leave\njmp *%0" : : "r"(_imp__MenuWindowProcW));
}

