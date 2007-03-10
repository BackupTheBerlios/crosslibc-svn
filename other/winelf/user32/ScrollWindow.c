#include "user32.h"
void _elfimplib_ScrollWindow() asm("ScrollWindow");
void *_imp__ScrollWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_ScrollWindow() {
load_dll_user32();
_imp__ScrollWindow = (void *) _elf_GetProcAddress(_dll_user32, "ScrollWindow");
}
void _elfimplib_ScrollWindow() {
asm("leave\njmp *%0" : : "r"(_imp__ScrollWindow));
}

