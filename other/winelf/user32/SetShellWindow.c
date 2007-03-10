#include "user32.h"
void _elfimplib_SetShellWindow() asm("SetShellWindow");
void *_imp__SetShellWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetShellWindow() {
load_dll_user32();
_imp__SetShellWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetShellWindow");
}
void _elfimplib_SetShellWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetShellWindow));
}

