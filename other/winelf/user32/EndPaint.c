#include "user32.h"
void _elfimplib_EndPaint() asm("EndPaint");
void *_imp__EndPaint = NULL;
__attribute__((constructor)) void _elfimplib_init_EndPaint() {
load_dll_user32();
_imp__EndPaint = (void *) _elf_GetProcAddress(_dll_user32, "EndPaint");
}
void _elfimplib_EndPaint() {
asm("leave\njmp *%0" : : "r"(_imp__EndPaint));
}

