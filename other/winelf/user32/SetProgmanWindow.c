#include "user32.h"
void _elfimplib_SetProgmanWindow() asm("SetProgmanWindow");
void *_imp__SetProgmanWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProgmanWindow() {
load_dll_user32();
_imp__SetProgmanWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetProgmanWindow");
}
void _elfimplib_SetProgmanWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetProgmanWindow));
}

