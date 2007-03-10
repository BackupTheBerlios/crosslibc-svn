#include "user32.h"
void _elfimplib_CreateIconIndirect() asm("CreateIconIndirect");
void *_imp__CreateIconIndirect = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIconIndirect() {
load_dll_user32();
_imp__CreateIconIndirect = (void *) _elf_GetProcAddress(_dll_user32, "CreateIconIndirect");
}
void _elfimplib_CreateIconIndirect() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIconIndirect));
}

