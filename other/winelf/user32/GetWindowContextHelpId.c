#include "user32.h"
void _elfimplib_GetWindowContextHelpId() asm("GetWindowContextHelpId");
void *_imp__GetWindowContextHelpId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowContextHelpId() {
load_dll_user32();
_imp__GetWindowContextHelpId = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowContextHelpId");
}
void _elfimplib_GetWindowContextHelpId() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowContextHelpId));
}

