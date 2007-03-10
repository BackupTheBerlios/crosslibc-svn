#include "user32.h"
void _elfimplib_SetForegroundWindow() asm("SetForegroundWindow");
void *_imp__SetForegroundWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetForegroundWindow() {
load_dll_user32();
_imp__SetForegroundWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetForegroundWindow");
}
void _elfimplib_SetForegroundWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetForegroundWindow));
}

