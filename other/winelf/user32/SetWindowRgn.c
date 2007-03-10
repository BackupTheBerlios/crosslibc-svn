#include "user32.h"
void _elfimplib_SetWindowRgn() asm("SetWindowRgn");
void *_imp__SetWindowRgn = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowRgn() {
load_dll_user32();
_imp__SetWindowRgn = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowRgn");
}
void _elfimplib_SetWindowRgn() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowRgn));
}

