#include "user32.h"
void _elfimplib_RemoveMenu() asm("RemoveMenu");
void *_imp__RemoveMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveMenu() {
load_dll_user32();
_imp__RemoveMenu = (void *) _elf_GetProcAddress(_dll_user32, "RemoveMenu");
}
void _elfimplib_RemoveMenu() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveMenu));
}

