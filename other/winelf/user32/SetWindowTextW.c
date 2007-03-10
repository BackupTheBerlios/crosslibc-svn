#include "user32.h"
void _elfimplib_SetWindowTextW() asm("SetWindowTextW");
void *_imp__SetWindowTextW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowTextW() {
load_dll_user32();
_imp__SetWindowTextW = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowTextW");
}
void _elfimplib_SetWindowTextW() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowTextW));
}

