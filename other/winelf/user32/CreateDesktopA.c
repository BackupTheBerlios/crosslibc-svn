#include "user32.h"
void _elfimplib_CreateDesktopA() asm("CreateDesktopA");
void *_imp__CreateDesktopA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDesktopA() {
load_dll_user32();
_imp__CreateDesktopA = (void *) _elf_GetProcAddress(_dll_user32, "CreateDesktopA");
}
void _elfimplib_CreateDesktopA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDesktopA));
}

