#include "user32.h"
void _elfimplib_SetScrollPos() asm("SetScrollPos");
void *_imp__SetScrollPos = NULL;
__attribute__((constructor)) void _elfimplib_init_SetScrollPos() {
load_dll_user32();
_imp__SetScrollPos = (void *) _elf_GetProcAddress(_dll_user32, "SetScrollPos");
}
void _elfimplib_SetScrollPos() {
asm("leave\njmp *%0" : : "r"(_imp__SetScrollPos));
}

