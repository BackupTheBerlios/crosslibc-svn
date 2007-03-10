#include "user32.h"
void _elfimplib_GetMenuStringA() asm("GetMenuStringA");
void *_imp__GetMenuStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuStringA() {
load_dll_user32();
_imp__GetMenuStringA = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuStringA");
}
void _elfimplib_GetMenuStringA() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuStringA));
}

