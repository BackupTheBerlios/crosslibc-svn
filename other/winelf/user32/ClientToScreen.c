#include "user32.h"
void _elfimplib_ClientToScreen() asm("ClientToScreen");
void *_imp__ClientToScreen = NULL;
__attribute__((constructor)) void _elfimplib_init_ClientToScreen() {
load_dll_user32();
_imp__ClientToScreen = (void *) _elf_GetProcAddress(_dll_user32, "ClientToScreen");
}
void _elfimplib_ClientToScreen() {
asm("leave\njmp *%0" : : "r"(_imp__ClientToScreen));
}

