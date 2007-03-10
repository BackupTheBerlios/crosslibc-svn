#include "user32.h"
void _elfimplib_SetDebugErrorLevel() asm("SetDebugErrorLevel");
void *_imp__SetDebugErrorLevel = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDebugErrorLevel() {
load_dll_user32();
_imp__SetDebugErrorLevel = (void *) _elf_GetProcAddress(_dll_user32, "SetDebugErrorLevel");
}
void _elfimplib_SetDebugErrorLevel() {
asm("leave\njmp *%0" : : "r"(_imp__SetDebugErrorLevel));
}

