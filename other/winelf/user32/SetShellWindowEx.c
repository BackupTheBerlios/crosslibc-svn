#include "user32.h"
void _elfimplib_SetShellWindowEx() asm("SetShellWindowEx");
void *_imp__SetShellWindowEx = NULL;
__attribute__((constructor)) void _elfimplib_init_SetShellWindowEx() {
load_dll_user32();
_imp__SetShellWindowEx = (void *) _elf_GetProcAddress(_dll_user32, "SetShellWindowEx");
}
void _elfimplib_SetShellWindowEx() {
asm("leave\njmp *%0" : : "r"(_imp__SetShellWindowEx));
}

