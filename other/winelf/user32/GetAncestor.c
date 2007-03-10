#include "user32.h"
void _elfimplib_GetAncestor() asm("GetAncestor");
void *_imp__GetAncestor = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAncestor() {
load_dll_user32();
_imp__GetAncestor = (void *) _elf_GetProcAddress(_dll_user32, "GetAncestor");
}
void _elfimplib_GetAncestor() {
asm("leave\njmp *%0" : : "r"(_imp__GetAncestor));
}

