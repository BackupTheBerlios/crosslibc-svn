#include "user32.h"
void _elfimplib_AlignRects() asm("AlignRects");
void *_imp__AlignRects = NULL;
__attribute__((constructor)) void _elfimplib_init_AlignRects() {
load_dll_user32();
_imp__AlignRects = (void *) _elf_GetProcAddress(_dll_user32, "AlignRects");
}
void _elfimplib_AlignRects() {
asm("leave\njmp *%0" : : "r"(_imp__AlignRects));
}

