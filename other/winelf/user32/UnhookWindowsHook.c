#include "user32.h"
void _elfimplib_UnhookWindowsHook() asm("UnhookWindowsHook");
void *_imp__UnhookWindowsHook = NULL;
__attribute__((constructor)) void _elfimplib_init_UnhookWindowsHook() {
load_dll_user32();
_imp__UnhookWindowsHook = (void *) _elf_GetProcAddress(_dll_user32, "UnhookWindowsHook");
}
void _elfimplib_UnhookWindowsHook() {
asm("leave\njmp *%0" : : "r"(_imp__UnhookWindowsHook));
}

