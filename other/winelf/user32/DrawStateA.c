#include "user32.h"
void _elfimplib_DrawStateA() asm("DrawStateA");
void *_imp__DrawStateA = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawStateA() {
load_dll_user32();
_imp__DrawStateA = (void *) _elf_GetProcAddress(_dll_user32, "DrawStateA");
}
void _elfimplib_DrawStateA() {
asm("leave\njmp *%0" : : "r"(_imp__DrawStateA));
}

