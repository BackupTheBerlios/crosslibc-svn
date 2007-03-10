#include "user32.h"
void _elfimplib_DrawEdge() asm("DrawEdge");
void *_imp__DrawEdge = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawEdge() {
load_dll_user32();
_imp__DrawEdge = (void *) _elf_GetProcAddress(_dll_user32, "DrawEdge");
}
void _elfimplib_DrawEdge() {
asm("leave\njmp *%0" : : "r"(_imp__DrawEdge));
}

