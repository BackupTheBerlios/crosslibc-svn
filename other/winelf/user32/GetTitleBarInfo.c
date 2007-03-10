#include "user32.h"
void _elfimplib_GetTitleBarInfo() asm("GetTitleBarInfo");
void *_imp__GetTitleBarInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetTitleBarInfo() {
load_dll_user32();
_imp__GetTitleBarInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetTitleBarInfo");
}
void _elfimplib_GetTitleBarInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetTitleBarInfo));
}

