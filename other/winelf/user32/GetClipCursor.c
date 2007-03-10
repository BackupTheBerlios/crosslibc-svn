#include "user32.h"
void _elfimplib_GetClipCursor() asm("GetClipCursor");
void *_imp__GetClipCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipCursor() {
load_dll_user32();
_imp__GetClipCursor = (void *) _elf_GetProcAddress(_dll_user32, "GetClipCursor");
}
void _elfimplib_GetClipCursor() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipCursor));
}

