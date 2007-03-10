#include "user32.h"
void _elfimplib_SetFocus() asm("SetFocus");
void *_imp__SetFocus = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFocus() {
load_dll_user32();
_imp__SetFocus = (void *) _elf_GetProcAddress(_dll_user32, "SetFocus");
}
void _elfimplib_SetFocus() {
asm("leave\njmp *%0" : : "r"(_imp__SetFocus));
}

