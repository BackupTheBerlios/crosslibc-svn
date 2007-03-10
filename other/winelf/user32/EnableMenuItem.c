#include "user32.h"
void _elfimplib_EnableMenuItem() asm("EnableMenuItem");
void *_imp__EnableMenuItem = NULL;
__attribute__((constructor)) void _elfimplib_init_EnableMenuItem() {
load_dll_user32();
_imp__EnableMenuItem = (void *) _elf_GetProcAddress(_dll_user32, "EnableMenuItem");
}
void _elfimplib_EnableMenuItem() {
asm("leave\njmp *%0" : : "r"(_imp__EnableMenuItem));
}

