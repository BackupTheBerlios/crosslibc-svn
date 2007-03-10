#include "user32.h"
void _elfimplib_SetWindowsHookExA() asm("SetWindowsHookExA");
void *_imp__SetWindowsHookExA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowsHookExA() {
load_dll_user32();
_imp__SetWindowsHookExA = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowsHookExA");
}
void _elfimplib_SetWindowsHookExA() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowsHookExA));
}

