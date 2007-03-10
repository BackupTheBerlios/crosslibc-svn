#include "user32.h"
void _elfimplib_SetMenuContextHelpId() asm("SetMenuContextHelpId");
void *_imp__SetMenuContextHelpId = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuContextHelpId() {
load_dll_user32();
_imp__SetMenuContextHelpId = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuContextHelpId");
}
void _elfimplib_SetMenuContextHelpId() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuContextHelpId));
}

