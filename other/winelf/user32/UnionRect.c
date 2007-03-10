#include "user32.h"
void _elfimplib_UnionRect() asm("UnionRect");
void *_imp__UnionRect = NULL;
__attribute__((constructor)) void _elfimplib_init_UnionRect() {
load_dll_user32();
_imp__UnionRect = (void *) _elf_GetProcAddress(_dll_user32, "UnionRect");
}
void _elfimplib_UnionRect() {
asm("leave\njmp *%0" : : "r"(_imp__UnionRect));
}

