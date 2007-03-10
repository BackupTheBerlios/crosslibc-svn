#include "user32.h"
void _elfimplib_SetScrollInfo() asm("SetScrollInfo");
void *_imp__SetScrollInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetScrollInfo() {
load_dll_user32();
_imp__SetScrollInfo = (void *) _elf_GetProcAddress(_dll_user32, "SetScrollInfo");
}
void _elfimplib_SetScrollInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetScrollInfo));
}

