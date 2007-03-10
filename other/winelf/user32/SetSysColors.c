#include "user32.h"
void _elfimplib_SetSysColors() asm("SetSysColors");
void *_imp__SetSysColors = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSysColors() {
load_dll_user32();
_imp__SetSysColors = (void *) _elf_GetProcAddress(_dll_user32, "SetSysColors");
}
void _elfimplib_SetSysColors() {
asm("leave\njmp *%0" : : "r"(_imp__SetSysColors));
}

