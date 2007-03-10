#include "user32.h"
void _elfimplib_SetActiveWindow() asm("SetActiveWindow");
void *_imp__SetActiveWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_SetActiveWindow() {
load_dll_user32();
_imp__SetActiveWindow = (void *) _elf_GetProcAddress(_dll_user32, "SetActiveWindow");
}
void _elfimplib_SetActiveWindow() {
asm("leave\njmp *%0" : : "r"(_imp__SetActiveWindow));
}

