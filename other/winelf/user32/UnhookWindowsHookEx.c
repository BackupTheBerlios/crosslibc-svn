#include "user32.h"
void _elfimplib_UnhookWindowsHookEx() asm("UnhookWindowsHookEx");
void *_imp__UnhookWindowsHookEx = NULL;
__attribute__((constructor)) void _elfimplib_init_UnhookWindowsHookEx() {
load_dll_user32();
_imp__UnhookWindowsHookEx = (void *) _elf_GetProcAddress(_dll_user32, "UnhookWindowsHookEx");
}
void _elfimplib_UnhookWindowsHookEx() {
asm("leave\njmp *%0" : : "r"(_imp__UnhookWindowsHookEx));
}

