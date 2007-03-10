#include "user32.h"
void _elfimplib_InvalidateRgn() asm("InvalidateRgn");
void *_imp__InvalidateRgn = NULL;
__attribute__((constructor)) void _elfimplib_init_InvalidateRgn() {
load_dll_user32();
_imp__InvalidateRgn = (void *) _elf_GetProcAddress(_dll_user32, "InvalidateRgn");
}
void _elfimplib_InvalidateRgn() {
asm("leave\njmp *%0" : : "r"(_imp__InvalidateRgn));
}

