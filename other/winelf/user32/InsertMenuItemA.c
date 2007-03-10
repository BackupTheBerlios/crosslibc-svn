#include "user32.h"
void _elfimplib_InsertMenuItemA() asm("InsertMenuItemA");
void *_imp__InsertMenuItemA = NULL;
__attribute__((constructor)) void _elfimplib_init_InsertMenuItemA() {
load_dll_user32();
_imp__InsertMenuItemA = (void *) _elf_GetProcAddress(_dll_user32, "InsertMenuItemA");
}
void _elfimplib_InsertMenuItemA() {
asm("leave\njmp *%0" : : "r"(_imp__InsertMenuItemA));
}

