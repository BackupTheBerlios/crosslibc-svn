#include "user32.h"
void _elfimplib_PeekMessageW() asm("PeekMessageW");
void *_imp__PeekMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekMessageW() {
load_dll_user32();
_imp__PeekMessageW = (void *) _elf_GetProcAddress(_dll_user32, "PeekMessageW");
}
void _elfimplib_PeekMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__PeekMessageW));
}

