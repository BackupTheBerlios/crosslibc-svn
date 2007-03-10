#include "user32.h"
void _elfimplib_CreatePopupMenu() asm("CreatePopupMenu");
void *_imp__CreatePopupMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_CreatePopupMenu() {
load_dll_user32();
_imp__CreatePopupMenu = (void *) _elf_GetProcAddress(_dll_user32, "CreatePopupMenu");
}
void _elfimplib_CreatePopupMenu() {
asm("leave\njmp *%0" : : "r"(_imp__CreatePopupMenu));
}

