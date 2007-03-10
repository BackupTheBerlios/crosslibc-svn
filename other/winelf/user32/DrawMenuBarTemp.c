#include "user32.h"
void _elfimplib_DrawMenuBarTemp() asm("DrawMenuBarTemp");
void *_imp__DrawMenuBarTemp = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawMenuBarTemp() {
load_dll_user32();
_imp__DrawMenuBarTemp = (void *) _elf_GetProcAddress(_dll_user32, "DrawMenuBarTemp");
}
void _elfimplib_DrawMenuBarTemp() {
asm("leave\njmp *%0" : : "r"(_imp__DrawMenuBarTemp));
}

