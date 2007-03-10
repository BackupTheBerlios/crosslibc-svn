#include "user32.h"
void _elfimplib_DrawStateW() asm("DrawStateW");
void *_imp__DrawStateW = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawStateW() {
load_dll_user32();
_imp__DrawStateW = (void *) _elf_GetProcAddress(_dll_user32, "DrawStateW");
}
void _elfimplib_DrawStateW() {
asm("leave\njmp *%0" : : "r"(_imp__DrawStateW));
}

