#include "user32.h"
void _elfimplib_GetPropA() asm("GetPropA");
void *_imp__GetPropA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPropA() {
load_dll_user32();
_imp__GetPropA = (void *) _elf_GetProcAddress(_dll_user32, "GetPropA");
}
void _elfimplib_GetPropA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPropA));
}

