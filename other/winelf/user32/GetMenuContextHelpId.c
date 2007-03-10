#include "user32.h"
void _elfimplib_GetMenuContextHelpId() asm("GetMenuContextHelpId");
void *_imp__GetMenuContextHelpId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuContextHelpId() {
load_dll_user32();
_imp__GetMenuContextHelpId = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuContextHelpId");
}
void _elfimplib_GetMenuContextHelpId() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuContextHelpId));
}

