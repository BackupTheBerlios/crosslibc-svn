#include "user32.h"
void _elfimplib_CreateMenu() asm("CreateMenu");
void *_imp__CreateMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateMenu() {
load_dll_user32();
_imp__CreateMenu = (void *) _elf_GetProcAddress(_dll_user32, "CreateMenu");
}
void _elfimplib_CreateMenu() {
asm("leave\njmp *%0" : : "r"(_imp__CreateMenu));
}

