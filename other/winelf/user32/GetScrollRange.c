#include "user32.h"
void _elfimplib_GetScrollRange() asm("GetScrollRange");
void *_imp__GetScrollRange = NULL;
__attribute__((constructor)) void _elfimplib_init_GetScrollRange() {
load_dll_user32();
_imp__GetScrollRange = (void *) _elf_GetProcAddress(_dll_user32, "GetScrollRange");
}
void _elfimplib_GetScrollRange() {
asm("leave\njmp *%0" : : "r"(_imp__GetScrollRange));
}

