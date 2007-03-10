#include "user32.h"
void _elfimplib_IsWindowEnabled() asm("IsWindowEnabled");
void *_imp__IsWindowEnabled = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWindowEnabled() {
load_dll_user32();
_imp__IsWindowEnabled = (void *) _elf_GetProcAddress(_dll_user32, "IsWindowEnabled");
}
void _elfimplib_IsWindowEnabled() {
asm("leave\njmp *%0" : : "r"(_imp__IsWindowEnabled));
}

