#include "user32.h"
void _elfimplib_SetWindowsHookA() asm("SetWindowsHookA");
void *_imp__SetWindowsHookA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowsHookA() {
load_dll_user32();
_imp__SetWindowsHookA = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowsHookA");
}
void _elfimplib_SetWindowsHookA() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowsHookA));
}

