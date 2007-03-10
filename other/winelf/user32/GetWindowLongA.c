#include "user32.h"
void _elfimplib_GetWindowLongA() asm("GetWindowLongA");
void *_imp__GetWindowLongA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowLongA() {
load_dll_user32();
_imp__GetWindowLongA = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowLongA");
}
void _elfimplib_GetWindowLongA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowLongA));
}

