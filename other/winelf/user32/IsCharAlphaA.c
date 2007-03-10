#include "user32.h"
void _elfimplib_IsCharAlphaA() asm("IsCharAlphaA");
void *_imp__IsCharAlphaA = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharAlphaA() {
load_dll_user32();
_imp__IsCharAlphaA = (void *) _elf_GetProcAddress(_dll_user32, "IsCharAlphaA");
}
void _elfimplib_IsCharAlphaA() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharAlphaA));
}

