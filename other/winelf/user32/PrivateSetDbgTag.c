#include "user32.h"
void _elfimplib_PrivateSetDbgTag() asm("PrivateSetDbgTag");
void *_imp__PrivateSetDbgTag = NULL;
__attribute__((constructor)) void _elfimplib_init_PrivateSetDbgTag() {
load_dll_user32();
_imp__PrivateSetDbgTag = (void *) _elf_GetProcAddress(_dll_user32, "PrivateSetDbgTag");
}
void _elfimplib_PrivateSetDbgTag() {
asm("leave\njmp *%0" : : "r"(_imp__PrivateSetDbgTag));
}

