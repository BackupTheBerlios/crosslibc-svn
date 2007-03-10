#include "user32.h"
void _elfimplib_SetPropW() asm("SetPropW");
void *_imp__SetPropW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetPropW() {
load_dll_user32();
_imp__SetPropW = (void *) _elf_GetProcAddress(_dll_user32, "SetPropW");
}
void _elfimplib_SetPropW() {
asm("leave\njmp *%0" : : "r"(_imp__SetPropW));
}

