#include "user32.h"
void _elfimplib_SwitchDesktop() asm("SwitchDesktop");
void *_imp__SwitchDesktop = NULL;
__attribute__((constructor)) void _elfimplib_init_SwitchDesktop() {
load_dll_user32();
_imp__SwitchDesktop = (void *) _elf_GetProcAddress(_dll_user32, "SwitchDesktop");
}
void _elfimplib_SwitchDesktop() {
asm("leave\njmp *%0" : : "r"(_imp__SwitchDesktop));
}

