#include "user32.h"
void _elfimplib_GetFocus() asm("GetFocus");
void *_imp__GetFocus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFocus() {
load_dll_user32();
_imp__GetFocus = (void *) _elf_GetProcAddress(_dll_user32, "GetFocus");
}
void _elfimplib_GetFocus() {
asm("leave\njmp *%0" : : "r"(_imp__GetFocus));
}

