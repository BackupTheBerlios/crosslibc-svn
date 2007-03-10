#include "user32.h"
void _elfimplib_IsCharAlphaW() asm("IsCharAlphaW");
void *_imp__IsCharAlphaW = NULL;
__attribute__((constructor)) void _elfimplib_init_IsCharAlphaW() {
load_dll_user32();
_imp__IsCharAlphaW = (void *) _elf_GetProcAddress(_dll_user32, "IsCharAlphaW");
}
void _elfimplib_IsCharAlphaW() {
asm("leave\njmp *%0" : : "r"(_imp__IsCharAlphaW));
}

