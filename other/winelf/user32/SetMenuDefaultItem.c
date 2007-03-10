#include "user32.h"
void _elfimplib_SetMenuDefaultItem() asm("SetMenuDefaultItem");
void *_imp__SetMenuDefaultItem = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuDefaultItem() {
load_dll_user32();
_imp__SetMenuDefaultItem = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuDefaultItem");
}
void _elfimplib_SetMenuDefaultItem() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuDefaultItem));
}

