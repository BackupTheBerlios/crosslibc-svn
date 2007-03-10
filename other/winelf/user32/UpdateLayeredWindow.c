#include "user32.h"
void _elfimplib_UpdateLayeredWindow() asm("UpdateLayeredWindow");
void *_imp__UpdateLayeredWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateLayeredWindow() {
load_dll_user32();
_imp__UpdateLayeredWindow = (void *) _elf_GetProcAddress(_dll_user32, "UpdateLayeredWindow");
}
void _elfimplib_UpdateLayeredWindow() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateLayeredWindow));
}

