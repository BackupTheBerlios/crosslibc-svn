#include "user32.h"
void _elfimplib_PrintWindow() asm("PrintWindow");
void *_imp__PrintWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_PrintWindow() {
load_dll_user32();
_imp__PrintWindow = (void *) _elf_GetProcAddress(_dll_user32, "PrintWindow");
}
void _elfimplib_PrintWindow() {
asm("leave\njmp *%0" : : "r"(_imp__PrintWindow));
}

