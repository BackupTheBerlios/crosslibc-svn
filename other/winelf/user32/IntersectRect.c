#include "user32.h"
void _elfimplib_IntersectRect() asm("IntersectRect");
void *_imp__IntersectRect = NULL;
__attribute__((constructor)) void _elfimplib_init_IntersectRect() {
load_dll_user32();
_imp__IntersectRect = (void *) _elf_GetProcAddress(_dll_user32, "IntersectRect");
}
void _elfimplib_IntersectRect() {
asm("leave\njmp *%0" : : "r"(_imp__IntersectRect));
}

