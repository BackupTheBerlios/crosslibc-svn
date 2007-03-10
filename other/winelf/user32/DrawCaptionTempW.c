#include "user32.h"
void _elfimplib_DrawCaptionTempW() asm("DrawCaptionTempW");
void *_imp__DrawCaptionTempW = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawCaptionTempW() {
load_dll_user32();
_imp__DrawCaptionTempW = (void *) _elf_GetProcAddress(_dll_user32, "DrawCaptionTempW");
}
void _elfimplib_DrawCaptionTempW() {
asm("leave\njmp *%0" : : "r"(_imp__DrawCaptionTempW));
}

