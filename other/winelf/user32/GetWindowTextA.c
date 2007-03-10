#include "user32.h"
void _elfimplib_GetWindowTextA() asm("GetWindowTextA");
void *_imp__GetWindowTextA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowTextA() {
load_dll_user32();
_imp__GetWindowTextA = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowTextA");
}
void _elfimplib_GetWindowTextA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowTextA));
}

