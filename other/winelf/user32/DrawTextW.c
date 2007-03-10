#include "user32.h"
void _elfimplib_DrawTextW() asm("DrawTextW");
void *_imp__DrawTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawTextW() {
load_dll_user32();
_imp__DrawTextW = (void *) _elf_GetProcAddress(_dll_user32, "DrawTextW");
}
void _elfimplib_DrawTextW() {
asm("leave\njmp *%0" : : "r"(_imp__DrawTextW));
}

