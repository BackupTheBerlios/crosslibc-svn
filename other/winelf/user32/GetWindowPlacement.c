#include "user32.h"
void _elfimplib_GetWindowPlacement() asm("GetWindowPlacement");
void *_imp__GetWindowPlacement = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowPlacement() {
load_dll_user32();
_imp__GetWindowPlacement = (void *) _elf_GetProcAddress(_dll_user32, "GetWindowPlacement");
}
void _elfimplib_GetWindowPlacement() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowPlacement));
}

