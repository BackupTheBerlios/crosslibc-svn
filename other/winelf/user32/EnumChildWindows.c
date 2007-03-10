#include "user32.h"
void _elfimplib_EnumChildWindows() asm("EnumChildWindows");
void *_imp__EnumChildWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumChildWindows() {
load_dll_user32();
_imp__EnumChildWindows = (void *) _elf_GetProcAddress(_dll_user32, "EnumChildWindows");
}
void _elfimplib_EnumChildWindows() {
asm("leave\njmp *%0" : : "r"(_imp__EnumChildWindows));
}

