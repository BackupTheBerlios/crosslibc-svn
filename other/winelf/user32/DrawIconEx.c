#include "user32.h"
void _elfimplib_DrawIconEx() asm("DrawIconEx");
void *_imp__DrawIconEx = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawIconEx() {
load_dll_user32();
_imp__DrawIconEx = (void *) _elf_GetProcAddress(_dll_user32, "DrawIconEx");
}
void _elfimplib_DrawIconEx() {
asm("leave\njmp *%0" : : "r"(_imp__DrawIconEx));
}

