#include "user32.h"
void _elfimplib_CascadeWindows() asm("CascadeWindows");
void *_imp__CascadeWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_CascadeWindows() {
load_dll_user32();
_imp__CascadeWindows = (void *) _elf_GetProcAddress(_dll_user32, "CascadeWindows");
}
void _elfimplib_CascadeWindows() {
asm("leave\njmp *%0" : : "r"(_imp__CascadeWindows));
}

