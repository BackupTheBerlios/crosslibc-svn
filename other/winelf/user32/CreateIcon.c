#include "user32.h"
void _elfimplib_CreateIcon() asm("CreateIcon");
void *_imp__CreateIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateIcon() {
load_dll_user32();
_imp__CreateIcon = (void *) _elf_GetProcAddress(_dll_user32, "CreateIcon");
}
void _elfimplib_CreateIcon() {
asm("leave\njmp *%0" : : "r"(_imp__CreateIcon));
}

