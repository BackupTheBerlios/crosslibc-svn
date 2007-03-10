#include "user32.h"
void _elfimplib_DeferWindowPos() asm("DeferWindowPos");
void *_imp__DeferWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_DeferWindowPos() {
load_dll_user32();
_imp__DeferWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "DeferWindowPos");
}
void _elfimplib_DeferWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__DeferWindowPos));
}

