#include "user32.h"
void _elfimplib_PtInRect() asm("PtInRect");
void *_imp__PtInRect = NULL;
__attribute__((constructor)) void _elfimplib_init_PtInRect() {
load_dll_user32();
_imp__PtInRect = (void *) _elf_GetProcAddress(_dll_user32, "PtInRect");
}
void _elfimplib_PtInRect() {
asm("leave\njmp *%0" : : "r"(_imp__PtInRect));
}

