#include "user32.h"
void _elfimplib_SetWindowTextA() asm("SetWindowTextA");
void *_imp__SetWindowTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowTextA() {
load_dll_user32();
_imp__SetWindowTextA = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowTextA");
}
void _elfimplib_SetWindowTextA() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowTextA));
}

