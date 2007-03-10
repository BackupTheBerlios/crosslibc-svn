#include "user32.h"
void _elfimplib_IsWinEventHookInstalled() asm("IsWinEventHookInstalled");
void *_imp__IsWinEventHookInstalled = NULL;
__attribute__((constructor)) void _elfimplib_init_IsWinEventHookInstalled() {
load_dll_user32();
_imp__IsWinEventHookInstalled = (void *) _elf_GetProcAddress(_dll_user32, "IsWinEventHookInstalled");
}
void _elfimplib_IsWinEventHookInstalled() {
asm("leave\njmp *%0" : : "r"(_imp__IsWinEventHookInstalled));
}

