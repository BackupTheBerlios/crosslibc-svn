#include "user32.h"
void _elfimplib_ShowCursor() asm("ShowCursor");
void *_imp__ShowCursor = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowCursor() {
load_dll_user32();
_imp__ShowCursor = (void *) _elf_GetProcAddress(_dll_user32, "ShowCursor");
}
void _elfimplib_ShowCursor() {
asm("leave\njmp *%0" : : "r"(_imp__ShowCursor));
}

