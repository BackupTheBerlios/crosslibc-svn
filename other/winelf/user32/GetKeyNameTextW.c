#include "user32.h"
void _elfimplib_GetKeyNameTextW() asm("GetKeyNameTextW");
void *_imp__GetKeyNameTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyNameTextW() {
load_dll_user32();
_imp__GetKeyNameTextW = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyNameTextW");
}
void _elfimplib_GetKeyNameTextW() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyNameTextW));
}

