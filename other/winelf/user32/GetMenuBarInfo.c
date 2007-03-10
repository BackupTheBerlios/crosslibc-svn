#include "user32.h"
void _elfimplib_GetMenuBarInfo() asm("GetMenuBarInfo");
void *_imp__GetMenuBarInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuBarInfo() {
load_dll_user32();
_imp__GetMenuBarInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuBarInfo");
}
void _elfimplib_GetMenuBarInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuBarInfo));
}

