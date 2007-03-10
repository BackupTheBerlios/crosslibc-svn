#include "user32.h"
void _elfimplib_CreateIconFromResource() asm("CreateIconFromResource");
void *_imp__CreateIconFromResource = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIconFromResource() {
load_dll_user32();
_imp__CreateIconFromResource = (void *) _elf_GetProcAddress(_dll_user32, "CreateIconFromResource");
}
void _elfimplib_CreateIconFromResource() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIconFromResource));
}

