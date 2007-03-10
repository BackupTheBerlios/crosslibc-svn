#include "user32.h"
void _elfimplib_SetWindowPlacement() asm("SetWindowPlacement");
void *_imp__SetWindowPlacement = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowPlacement() {
load_dll_user32();
_imp__SetWindowPlacement = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowPlacement");
}
void _elfimplib_SetWindowPlacement() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowPlacement));
}

