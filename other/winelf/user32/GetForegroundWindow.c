#include "user32.h"
void _elfimplib_GetForegroundWindow() asm("GetForegroundWindow");
void *_imp__GetForegroundWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetForegroundWindow() {
load_dll_user32();
_imp__GetForegroundWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetForegroundWindow");
}
void _elfimplib_GetForegroundWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetForegroundWindow));
}

