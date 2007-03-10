#include "user32.h"
void _elfimplib_GetScrollBarInfo() asm("GetScrollBarInfo");
void *_imp__GetScrollBarInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetScrollBarInfo() {
load_dll_user32();
_imp__GetScrollBarInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetScrollBarInfo");
}
void _elfimplib_GetScrollBarInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetScrollBarInfo));
}

