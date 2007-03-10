#include "user32.h"
void _elfimplib_DrawTextExA() asm("DrawTextExA");
void *_imp__DrawTextExA = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawTextExA() {
load_dll_user32();
_imp__DrawTextExA = (void *) _elf_GetProcAddress(_dll_user32, "DrawTextExA");
}
void _elfimplib_DrawTextExA() {
asm("leave\njmp *%0" : : "r"(_imp__DrawTextExA));
}

