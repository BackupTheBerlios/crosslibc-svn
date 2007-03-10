#include "user32.h"
void _elfimplib_GetSystemMenu() asm("GetSystemMenu");
void *_imp__GetSystemMenu = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemMenu() {
load_dll_user32();
_imp__GetSystemMenu = (void *) _elf_GetProcAddress(_dll_user32, "GetSystemMenu");
}
void _elfimplib_GetSystemMenu() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemMenu));
}

