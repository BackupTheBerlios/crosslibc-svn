#include "user32.h"
void _elfimplib_PeekMessageA() asm("PeekMessageA");
void *_imp__PeekMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekMessageA() {
load_dll_user32();
_imp__PeekMessageA = (void *) _elf_GetProcAddress(_dll_user32, "PeekMessageA");
}
void _elfimplib_PeekMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__PeekMessageA));
}

