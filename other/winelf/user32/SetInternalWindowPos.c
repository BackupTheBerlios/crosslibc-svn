#include "user32.h"
void _elfimplib_SetInternalWindowPos() asm("SetInternalWindowPos");
void *_imp__SetInternalWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_SetInternalWindowPos() {
load_dll_user32();
_imp__SetInternalWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "SetInternalWindowPos");
}
void _elfimplib_SetInternalWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__SetInternalWindowPos));
}

