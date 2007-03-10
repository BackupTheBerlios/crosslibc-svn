#include "user32.h"
void _elfimplib_EnableWindow() asm("EnableWindow");
void *_imp__EnableWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_EnableWindow() {
load_dll_user32();
_imp__EnableWindow = (void *) _elf_GetProcAddress(_dll_user32, "EnableWindow");
}
void _elfimplib_EnableWindow() {
asm("leave\njmp *%0" : : "r"(_imp__EnableWindow));
}

