#include "user32.h"
void _elfimplib_ShowStartGlass() asm("ShowStartGlass");
void *_imp__ShowStartGlass = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowStartGlass() {
load_dll_user32();
_imp__ShowStartGlass = (void *) _elf_GetProcAddress(_dll_user32, "ShowStartGlass");
}
void _elfimplib_ShowStartGlass() {
asm("leave\njmp *%0" : : "r"(_imp__ShowStartGlass));
}

