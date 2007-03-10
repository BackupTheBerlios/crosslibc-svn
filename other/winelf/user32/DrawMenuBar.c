#include "user32.h"
void _elfimplib_DrawMenuBar() asm("DrawMenuBar");
void *_imp__DrawMenuBar = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawMenuBar() {
load_dll_user32();
_imp__DrawMenuBar = (void *) _elf_GetProcAddress(_dll_user32, "DrawMenuBar");
}
void _elfimplib_DrawMenuBar() {
asm("leave\njmp *%0" : : "r"(_imp__DrawMenuBar));
}

