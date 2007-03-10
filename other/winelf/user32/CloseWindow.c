#include "user32.h"
void _elfimplib_CloseWindow() asm("CloseWindow");
void *_imp__CloseWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseWindow() {
load_dll_user32();
_imp__CloseWindow = (void *) _elf_GetProcAddress(_dll_user32, "CloseWindow");
}
void _elfimplib_CloseWindow() {
asm("leave\njmp *%0" : : "r"(_imp__CloseWindow));
}

