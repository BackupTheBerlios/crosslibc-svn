#include "user32.h"
void _elfimplib_InsertMenuA() asm("InsertMenuA");
void *_imp__InsertMenuA = NULL;
__attribute__((constructor)) void _elfimplib_init_InsertMenuA() {
load_dll_user32();
_imp__InsertMenuA = (void *) _elf_GetProcAddress(_dll_user32, "InsertMenuA");
}
void _elfimplib_InsertMenuA() {
asm("leave\njmp *%0" : : "r"(_imp__InsertMenuA));
}

