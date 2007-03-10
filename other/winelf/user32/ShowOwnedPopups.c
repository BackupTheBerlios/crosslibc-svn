#include "user32.h"
void _elfimplib_ShowOwnedPopups() asm("ShowOwnedPopups");
void *_imp__ShowOwnedPopups = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowOwnedPopups() {
load_dll_user32();
_imp__ShowOwnedPopups = (void *) _elf_GetProcAddress(_dll_user32, "ShowOwnedPopups");
}
void _elfimplib_ShowOwnedPopups() {
asm("leave\njmp *%0" : : "r"(_imp__ShowOwnedPopups));
}

