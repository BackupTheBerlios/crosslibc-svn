#include "user32.h"
void _elfimplib_GetCursor() asm("GetCursor");
void *_imp__GetCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCursor() {
load_dll_user32();
_imp__GetCursor = (void *) _elf_GetProcAddress(_dll_user32, "GetCursor");
}
void _elfimplib_GetCursor() {
asm("leave\njmp *%0" : : "r"(_imp__GetCursor));
}

