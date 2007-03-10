#include "user32.h"
void _elfimplib_DrawTextA() asm("DrawTextA");
void *_imp__DrawTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawTextA() {
load_dll_user32();
_imp__DrawTextA = (void *) _elf_GetProcAddress(_dll_user32, "DrawTextA");
}
void _elfimplib_DrawTextA() {
asm("leave\njmp *%0" : : "r"(_imp__DrawTextA));
}

