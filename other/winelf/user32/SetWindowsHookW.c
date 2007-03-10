#include "user32.h"
void _elfimplib_SetWindowsHookW() asm("SetWindowsHookW");
void *_imp__SetWindowsHookW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowsHookW() {
load_dll_user32();
_imp__SetWindowsHookW = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowsHookW");
}
void _elfimplib_SetWindowsHookW() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowsHookW));
}

