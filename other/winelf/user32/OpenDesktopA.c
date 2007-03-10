#include "user32.h"
void _elfimplib_OpenDesktopA() asm("OpenDesktopA");
void *_imp__OpenDesktopA = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenDesktopA() {
load_dll_user32();
_imp__OpenDesktopA = (void *) _elf_GetProcAddress(_dll_user32, "OpenDesktopA");
}
void _elfimplib_OpenDesktopA() {
asm("leave\njmp *%0" : : "r"(_imp__OpenDesktopA));
}

