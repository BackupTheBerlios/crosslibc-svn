#include "user32.h"
void _elfimplib_CreateCaret() asm("CreateCaret");
void *_imp__CreateCaret = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateCaret() {
load_dll_user32();
_imp__CreateCaret = (void *) _elf_GetProcAddress(_dll_user32, "CreateCaret");
}
void _elfimplib_CreateCaret() {
asm("leave\njmp *%0" : : "r"(_imp__CreateCaret));
}

