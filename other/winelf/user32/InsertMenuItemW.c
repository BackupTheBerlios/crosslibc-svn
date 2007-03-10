#include "user32.h"
void _elfimplib_InsertMenuItemW() asm("InsertMenuItemW");
void *_imp__InsertMenuItemW = NULL;
__attribute__((constructor)) void _elfimplib_init_InsertMenuItemW() {
load_dll_user32();
_imp__InsertMenuItemW = (void *) _elf_GetProcAddress(_dll_user32, "InsertMenuItemW");
}
void _elfimplib_InsertMenuItemW() {
asm("leave\njmp *%0" : : "r"(_imp__InsertMenuItemW));
}

