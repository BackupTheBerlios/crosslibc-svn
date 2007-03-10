#include "user32.h"
void _elfimplib_SetSystemCursor() asm("SetSystemCursor");
void *_imp__SetSystemCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemCursor() {
load_dll_user32();
_imp__SetSystemCursor = (void *) _elf_GetProcAddress(_dll_user32, "SetSystemCursor");
}
void _elfimplib_SetSystemCursor() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemCursor));
}

