#include "user32.h"
void _elfimplib_InflateRect() asm("InflateRect");
void *_imp__InflateRect = NULL;
__attribute__((constructor)) void _elfimplib_init_InflateRect() {
load_dll_user32();
_imp__InflateRect = (void *) _elf_GetProcAddress(_dll_user32, "InflateRect");
}
void _elfimplib_InflateRect() {
asm("leave\njmp *%0" : : "r"(_imp__InflateRect));
}

