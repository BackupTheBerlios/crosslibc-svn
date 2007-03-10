#include "user32.h"
void _elfimplib_DrawCaptionTempA() asm("DrawCaptionTempA");
void *_imp__DrawCaptionTempA = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawCaptionTempA() {
load_dll_user32();
_imp__DrawCaptionTempA = (void *) _elf_GetProcAddress(_dll_user32, "DrawCaptionTempA");
}
void _elfimplib_DrawCaptionTempA() {
asm("leave\njmp *%0" : : "r"(_imp__DrawCaptionTempA));
}

