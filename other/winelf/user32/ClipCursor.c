#include "user32.h"
void _elfimplib_ClipCursor() asm("ClipCursor");
void *_imp__ClipCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_ClipCursor() {
load_dll_user32();
_imp__ClipCursor = (void *) _elf_GetProcAddress(_dll_user32, "ClipCursor");
}
void _elfimplib_ClipCursor() {
asm("leave\njmp *%0" : : "r"(_imp__ClipCursor));
}

