#include "user32.h"
void _elfimplib_SetRect() asm("SetRect");
void *_imp__SetRect = NULL;
__attribute__((constructor)) void _elfimplib_init_SetRect() {
load_dll_user32();
_imp__SetRect = (void *) _elf_GetProcAddress(_dll_user32, "SetRect");
}
void _elfimplib_SetRect() {
asm("leave\njmp *%0" : : "r"(_imp__SetRect));
}

