#include "user32.h"
void _elfimplib_WindowFromPoint() asm("WindowFromPoint");
void *_imp__WindowFromPoint = NULL;
__attribute__((constructor)) void _elfimplib_init_WindowFromPoint() {
load_dll_user32();
_imp__WindowFromPoint = (void *) _elf_GetProcAddress(_dll_user32, "WindowFromPoint");
}
void _elfimplib_WindowFromPoint() {
asm("leave\njmp *%0" : : "r"(_imp__WindowFromPoint));
}

