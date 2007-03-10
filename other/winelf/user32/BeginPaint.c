#include "user32.h"
void _elfimplib_BeginPaint() asm("BeginPaint");
void *_imp__BeginPaint = NULL;
__attribute__((constructor)) void _elfimplib_init_BeginPaint() {
load_dll_user32();
_imp__BeginPaint = (void *) _elf_GetProcAddress(_dll_user32, "BeginPaint");
}
void _elfimplib_BeginPaint() {
asm("leave\njmp *%0" : : "r"(_imp__BeginPaint));
}

