#include "user32.h"
void _elfimplib_InvalidateRect() asm("InvalidateRect");
void *_imp__InvalidateRect = NULL;
__attribute__((constructor)) void _elfimplib_init_InvalidateRect() {
load_dll_user32();
_imp__InvalidateRect = (void *) _elf_GetProcAddress(_dll_user32, "InvalidateRect");
}
void _elfimplib_InvalidateRect() {
asm("leave\njmp *%0" : : "r"(_imp__InvalidateRect));
}

