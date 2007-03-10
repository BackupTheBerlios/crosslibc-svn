#include "user32.h"
void _elfimplib_SetCursor() asm("SetCursor");
void *_imp__SetCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCursor() {
load_dll_user32();
_imp__SetCursor = (void *) _elf_GetProcAddress(_dll_user32, "SetCursor");
}
void _elfimplib_SetCursor() {
asm("leave\njmp *%0" : : "r"(_imp__SetCursor));
}

