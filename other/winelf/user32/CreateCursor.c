#include "user32.h"
void _elfimplib_CreateCursor() asm("CreateCursor");
void *_imp__CreateCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateCursor() {
load_dll_user32();
_imp__CreateCursor = (void *) _elf_GetProcAddress(_dll_user32, "CreateCursor");
}
void _elfimplib_CreateCursor() {
asm("leave\njmp *%0" : : "r"(_imp__CreateCursor));
}

