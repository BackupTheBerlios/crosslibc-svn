#include "user32.h"
void _elfimplib_SetThreadDesktop() asm("SetThreadDesktop");
void *_imp__SetThreadDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadDesktop() {
load_dll_user32();
_imp__SetThreadDesktop = (void *) _elf_GetProcAddress(_dll_user32, "SetThreadDesktop");
}
void _elfimplib_SetThreadDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadDesktop));
}

