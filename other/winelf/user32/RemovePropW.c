#include "user32.h"
void _elfimplib_RemovePropW() asm("RemovePropW");
void *_imp__RemovePropW = NULL;
__attribute__((constructor)) void _elfimplib_init_RemovePropW() {
load_dll_user32();
_imp__RemovePropW = (void *) _elf_GetProcAddress(_dll_user32, "RemovePropW");
}
void _elfimplib_RemovePropW() {
asm("leave\njmp *%0" : : "r"(_imp__RemovePropW));
}

