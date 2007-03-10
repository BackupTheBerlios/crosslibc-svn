#include "user32.h"
void _elfimplib_UpdateWindow() asm("UpdateWindow");
void *_imp__UpdateWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_UpdateWindow() {
load_dll_user32();
_imp__UpdateWindow = (void *) _elf_GetProcAddress(_dll_user32, "UpdateWindow");
}
void _elfimplib_UpdateWindow() {
asm("leave\njmp *%0" : : "r"(_imp__UpdateWindow));
}

