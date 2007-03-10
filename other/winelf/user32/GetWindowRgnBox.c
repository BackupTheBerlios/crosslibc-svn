#include "user32.h"
void _elfimplib_GetWindowRgnBox() asm("GetWindowRgnBox");
void *_imp__GetWindowRgnBox = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowRgnBox() {
load_dll_user32();
_imp__GetWindowRgnBox = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowRgnBox");
}
void _elfimplib_GetWindowRgnBox() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowRgnBox));
}

