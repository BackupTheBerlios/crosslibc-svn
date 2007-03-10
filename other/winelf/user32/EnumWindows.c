#include "user32.h"
void _elfimplib_EnumWindows() asm("EnumWindows");
void *_imp__EnumWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumWindows() {
load_dll_user32();
_imp__EnumWindows = (void *) _elf_GetProcAddress(_dll_user32, "EnumWindows");
}
void _elfimplib_EnumWindows() {
asm("leave\njmp *%0" : : "r"(_imp__EnumWindows));
}

