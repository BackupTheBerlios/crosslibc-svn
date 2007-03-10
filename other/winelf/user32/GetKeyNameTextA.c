#include "user32.h"
void _elfimplib_GetKeyNameTextA() asm("GetKeyNameTextA");
void *_imp__GetKeyNameTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyNameTextA() {
load_dll_user32();
_imp__GetKeyNameTextA = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyNameTextA");
}
void _elfimplib_GetKeyNameTextA() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyNameTextA));
}

