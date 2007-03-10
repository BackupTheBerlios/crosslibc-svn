#include "user32.h"
void _elfimplib_EnumDesktopWindows() asm("EnumDesktopWindows");
void *_imp__EnumDesktopWindows = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumDesktopWindows() {
load_dll_user32();
_imp__EnumDesktopWindows = (void *) _elf_GetProcAddress(_dll_user32, "EnumDesktopWindows");
}
void _elfimplib_EnumDesktopWindows() {
asm("leave\njmp *%0" : : "r"(_imp__EnumDesktopWindows));
}

