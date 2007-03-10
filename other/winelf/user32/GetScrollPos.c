#include "user32.h"
void _elfimplib_GetScrollPos() asm("GetScrollPos");
void *_imp__GetScrollPos = NULL;
__attribute__((constructor)) void _elfimplib_init_GetScrollPos() {
load_dll_user32();
_imp__GetScrollPos = (void *) _elf_GetProcAddress(_dll_user32, "GetScrollPos");
}
void _elfimplib_GetScrollPos() {
asm("leave\njmp *%0" : : "r"(_imp__GetScrollPos));
}

