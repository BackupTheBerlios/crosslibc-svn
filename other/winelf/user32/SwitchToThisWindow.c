#include "user32.h"
void _elfimplib_SwitchToThisWindow() asm("SwitchToThisWindow");
void *_imp__SwitchToThisWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchToThisWindow() {
load_dll_user32();
_imp__SwitchToThisWindow = (void *) _elf_GetProcAddress(_dll_user32, "SwitchToThisWindow");
}
void _elfimplib_SwitchToThisWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchToThisWindow));
}

