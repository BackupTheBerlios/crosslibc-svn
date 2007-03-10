#include "user32.h"
void _elfimplib_SetScrollRange() asm("SetScrollRange");
void *_imp__SetScrollRange = NULL;
__attribute__((constructor)) void _elfimplib_init_SetScrollRange() {
load_dll_user32();
_imp__SetScrollRange = (void *) _elf_GetProcAddress(_dll_user32, "SetScrollRange");
}
void _elfimplib_SetScrollRange() {
asm("leave\njmp *%0" : : "r"(_imp__SetScrollRange));
}

