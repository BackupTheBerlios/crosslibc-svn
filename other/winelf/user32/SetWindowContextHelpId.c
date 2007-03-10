#include "user32.h"
void _elfimplib_SetWindowContextHelpId() asm("SetWindowContextHelpId");
void *_imp__SetWindowContextHelpId = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowContextHelpId() {
load_dll_user32();
_imp__SetWindowContextHelpId = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowContextHelpId");
}
void _elfimplib_SetWindowContextHelpId() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowContextHelpId));
}

