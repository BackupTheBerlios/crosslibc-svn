#include "user32.h"
void _elfimplib_GetPropW() asm("GetPropW");
void *_imp__GetPropW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPropW() {
load_dll_user32();
_imp__GetPropW = (void *) _elf_GetProcAddress(_dll_user32, "GetPropW");
}
void _elfimplib_GetPropW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPropW));
}

