#include "user32.h"
void _elfimplib_MoveWindow() asm("MoveWindow");
void *_imp__MoveWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_MoveWindow() {
load_dll_user32();
_imp__MoveWindow = (void *) _elf_GetProcAddress(_dll_user32, "MoveWindow");
}
void _elfimplib_MoveWindow() {
asm("leave\njmp *%0" : : "r"(_imp__MoveWindow));
}

