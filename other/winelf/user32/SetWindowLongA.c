#include "user32.h"
void _elfimplib_SetWindowLongA() asm("SetWindowLongA");
void *_imp__SetWindowLongA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowLongA() {
load_dll_user32();
_imp__SetWindowLongA = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowLongA");
}
void _elfimplib_SetWindowLongA() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowLongA));
}

