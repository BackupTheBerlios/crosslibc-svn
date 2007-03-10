#include "user32.h"
void _elfimplib_LockSetForegroundWindow() asm("LockSetForegroundWindow");
void *_imp__LockSetForegroundWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_LockSetForegroundWindow() {
load_dll_user32();
_imp__LockSetForegroundWindow = (void *) _elf_GetProcAddress(_dll_user32, "LockSetForegroundWindow");
}
void _elfimplib_LockSetForegroundWindow() {
asm("leave\njmp *%0" : : "r"(_imp__LockSetForegroundWindow));
}

