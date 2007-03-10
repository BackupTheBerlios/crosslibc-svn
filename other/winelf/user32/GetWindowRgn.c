#include "user32.h"
void _elfimplib_GetWindowRgn() asm("GetWindowRgn");
void *_imp__GetWindowRgn = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowRgn() {
load_dll_user32();
_imp__GetWindowRgn = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowRgn");
}
void _elfimplib_GetWindowRgn() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowRgn));
}

