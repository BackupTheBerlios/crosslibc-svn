#include "user32.h"
void _elfimplib_InsertMenuW() asm("InsertMenuW");
void *_imp__InsertMenuW = NULL;
__attribute__((constructor)) void _elfimplib_init_InsertMenuW() {
load_dll_user32();
_imp__InsertMenuW = (void *) _elf_GetProcAddress(_dll_user32, "InsertMenuW");
}
void _elfimplib_InsertMenuW() {
asm("leave\njmp *%0" : : "r"(_imp__InsertMenuW));
}

