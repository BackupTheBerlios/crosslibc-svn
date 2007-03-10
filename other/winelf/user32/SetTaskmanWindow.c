#include "user32.h"
void _elfimplib_SetTaskmanWindow() asm("SetTaskmanWindow");
void *_imp__SetTaskmanWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTaskmanWindow() {
load_dll_user32();
_imp__SetTaskmanWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetTaskmanWindow");
}
void _elfimplib_SetTaskmanWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetTaskmanWindow));
}

