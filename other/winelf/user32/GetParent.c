#include "user32.h"
void _elfimplib_GetParent() asm("GetParent");
void *_imp__GetParent = NULL;
__attribute__((constructor)) void _elfimplib_init_GetParent() {
load_dll_user32();
_imp__GetParent = (void *) _elf_GetProcAddress(_dll_user32, "GetParent");
}
void _elfimplib_GetParent() {
asm("leave\njmp *%0" : : "r"(_imp__GetParent));
}

