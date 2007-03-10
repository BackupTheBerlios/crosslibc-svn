#include "user32.h"
void _elfimplib_SetTimer() asm("SetTimer");
void *_imp__SetTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTimer() {
load_dll_user32();
_imp__SetTimer = (void *) _elf_GetProcAddress(_dll_user32, "SetTimer");
}
void _elfimplib_SetTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetTimer));
}

