#include "user32.h"
void _elfimplib_AllowSetForegroundWindow() asm("AllowSetForegroundWindow");
void *_imp__AllowSetForegroundWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_AllowSetForegroundWindow() {
load_dll_user32();
_imp__AllowSetForegroundWindow = (void *) _elf_GetProcAddress(_dll_user32, "AllowSetForegroundWindow");
}
void _elfimplib_AllowSetForegroundWindow() {
asm("leave\njmp *%0" : : "r"(_imp__AllowSetForegroundWindow));
}

