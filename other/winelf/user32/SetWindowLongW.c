#include "user32.h"
void _elfimplib_SetWindowLongW() asm("SetWindowLongW");
void *_imp__SetWindowLongW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowLongW() {
load_dll_user32();
_imp__SetWindowLongW = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowLongW");
}
void _elfimplib_SetWindowLongW() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowLongW));
}

