#include "user32.h"
void _elfimplib_GetMenuDefaultItem() asm("GetMenuDefaultItem");
void *_imp__GetMenuDefaultItem = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuDefaultItem() {
load_dll_user32();
_imp__GetMenuDefaultItem = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuDefaultItem");
}
void _elfimplib_GetMenuDefaultItem() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuDefaultItem));
}

