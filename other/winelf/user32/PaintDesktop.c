#include "user32.h"
void _elfimplib_PaintDesktop() asm("PaintDesktop");
void *_imp__PaintDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_PaintDesktop() {
load_dll_user32();
_imp__PaintDesktop = (void *) _elf_GetProcAddress(_dll_user32, "PaintDesktop");
}
void _elfimplib_PaintDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__PaintDesktop));
}

