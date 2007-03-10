#include "user32.h"
void _elfimplib_WindowFromDC() asm("WindowFromDC");
void *_imp__WindowFromDC = NULL;
__attribute__((constructor)) void _elfimplib_init_WindowFromDC() {
load_dll_user32();
_imp__WindowFromDC = (void *) _elf_GetProcAddress(_dll_user32, "WindowFromDC");
}
void _elfimplib_WindowFromDC() {
asm("leave\njmp *%0" : : "r"(_imp__WindowFromDC));
}

