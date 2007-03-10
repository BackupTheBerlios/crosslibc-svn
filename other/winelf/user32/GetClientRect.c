#include "user32.h"
void _elfimplib_GetClientRect() asm("GetClientRect");
void *_imp__GetClientRect = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClientRect() {
load_dll_user32();
_imp__GetClientRect = (void *) _elf_GetProcAddress(_dll_user32, "GetClientRect");
}
void _elfimplib_GetClientRect() {
asm("leave\njmp *%0" : : "r"(_imp__GetClientRect));
}

