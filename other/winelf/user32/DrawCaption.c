#include "user32.h"
void _elfimplib_DrawCaption() asm("DrawCaption");
void *_imp__DrawCaption = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawCaption() {
load_dll_user32();
_imp__DrawCaption = (void *) _elf_GetProcAddress(_dll_user32, "DrawCaption");
}
void _elfimplib_DrawCaption() {
asm("leave\njmp *%0" : : "r"(_imp__DrawCaption));
}

