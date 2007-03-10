#include "user32.h"
void _elfimplib_ShowScrollBar() asm("ShowScrollBar");
void *_imp__ShowScrollBar = NULL;
__attribute__((constructor)) void _elfimplib_init_ShowScrollBar() {
load_dll_user32();
_imp__ShowScrollBar = (void *) _elf_GetProcAddress(_dll_user32, "ShowScrollBar");
}
void _elfimplib_ShowScrollBar() {
asm("leave\njmp *%0" : : "r"(_imp__ShowScrollBar));
}

