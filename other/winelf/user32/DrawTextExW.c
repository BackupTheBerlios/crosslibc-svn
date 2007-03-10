#include "user32.h"
void _elfimplib_DrawTextExW() asm("DrawTextExW");
void *_imp__DrawTextExW = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawTextExW() {
load_dll_user32();
_imp__DrawTextExW = (void *) _elf_GetProcAddress(_dll_user32, "DrawTextExW");
}
void _elfimplib_DrawTextExW() {
asm("leave\njmp *%0" : : "r"(_imp__DrawTextExW));
}

