#include "user32.h"
void _elfimplib_DrawFrame() asm("DrawFrame");
void *_imp__DrawFrame = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawFrame() {
load_dll_user32();
_imp__DrawFrame = (void *) _elf_GetProcAddress(_dll_user32, "DrawFrame");
}
void _elfimplib_DrawFrame() {
asm("leave\njmp *%0" : : "r"(_imp__DrawFrame));
}

