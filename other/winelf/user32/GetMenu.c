#include "user32.h"
void _elfimplib_GetMenu() asm("GetMenu");
void *_imp__GetMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenu() {
load_dll_user32();
_imp__GetMenu = (void *) _elf_GetProcAddress(_dll_user32, "GetMenu");
}
void _elfimplib_GetMenu() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenu));
}

