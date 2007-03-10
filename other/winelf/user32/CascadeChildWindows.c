#include "user32.h"
void _elfimplib_CascadeChildWindows() asm("CascadeChildWindows");
void *_imp__CascadeChildWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_CascadeChildWindows() {
load_dll_user32();
_imp__CascadeChildWindows = (void *) _elf_GetProcAddress(_dll_user32, "CascadeChildWindows");
}
void _elfimplib_CascadeChildWindows() {
asm("leave\njmp *%0" : : "r"(_imp__CascadeChildWindows));
}

