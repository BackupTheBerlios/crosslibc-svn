#include "user32.h"
void _elfimplib_SetPropA() asm("SetPropA");
void *_imp__SetPropA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetPropA() {
load_dll_user32();
_imp__SetPropA = (void *) _elf_GetProcAddress(_dll_user32, "SetPropA");
}
void _elfimplib_SetPropA() {
asm("leave\njmp *%0" : : "r"(_imp__SetPropA));
}

