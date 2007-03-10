#include "user32.h"
void _elfimplib_EnableScrollBar() asm("EnableScrollBar");
void *_imp__EnableScrollBar = NULL;
__attribute__((constructor)) void _elfimplib_init_EnableScrollBar() {
load_dll_user32();
_imp__EnableScrollBar = (void *) _elf_GetProcAddress(_dll_user32, "EnableScrollBar");
}
void _elfimplib_EnableScrollBar() {
asm("leave\njmp *%0" : : "r"(_imp__EnableScrollBar));
}

