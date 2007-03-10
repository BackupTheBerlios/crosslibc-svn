#include "user32.h"
void _elfimplib_SetSystemTimer() asm("SetSystemTimer");
void *_imp__SetSystemTimer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetSystemTimer() {
load_dll_user32();
_imp__SetSystemTimer = (void *) _elf_GetProcAddress(_dll_user32, "SetSystemTimer");
}
void _elfimplib_SetSystemTimer() {
asm("leave\njmp *%0" : : "r"(_imp__SetSystemTimer));
}

