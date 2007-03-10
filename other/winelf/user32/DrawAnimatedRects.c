#include "user32.h"
void _elfimplib_DrawAnimatedRects() asm("DrawAnimatedRects");
void *_imp__DrawAnimatedRects = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawAnimatedRects() {
load_dll_user32();
_imp__DrawAnimatedRects = (void *) _elf_GetProcAddress(_dll_user32, "DrawAnimatedRects");
}
void _elfimplib_DrawAnimatedRects() {
asm("leave\njmp *%0" : : "r"(_imp__DrawAnimatedRects));
}

