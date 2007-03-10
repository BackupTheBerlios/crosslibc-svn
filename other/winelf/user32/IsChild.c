#include "user32.h"
void _elfimplib_IsChild() asm("IsChild");
void *_imp__IsChild = NULL;
__attribute__((constructor)) void _elfimplib_init_IsChild() {
load_dll_user32();
_imp__IsChild = (void *) _elf_GetProcAddress(_dll_user32, "IsChild");
}
void _elfimplib_IsChild() {
asm("leave\njmp *%0" : : "r"(_imp__IsChild));
}

