#include "user32.h"
void _elfimplib_SetWinEventHook() asm("SetWinEventHook");
void *_imp__SetWinEventHook = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWinEventHook() {
load_dll_user32();
_imp__SetWinEventHook = (void *) _elf_GetProcAddress(_dll_user32, "SetWinEventHook");
}
void _elfimplib_SetWinEventHook() {
asm("leave\njmp *%0" : : "r"(_imp__SetWinEventHook));
}

