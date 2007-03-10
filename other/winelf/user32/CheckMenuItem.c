#include "user32.h"
void _elfimplib_CheckMenuItem() asm("CheckMenuItem");
void *_imp__CheckMenuItem = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckMenuItem() {
load_dll_user32();
_imp__CheckMenuItem = (void *) _elf_GetProcAddress(_dll_user32, "CheckMenuItem");
}
void _elfimplib_CheckMenuItem() {
asm("leave\njmp *%0" : : "r"(_imp__CheckMenuItem));
}

