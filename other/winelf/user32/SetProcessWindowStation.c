#include "user32.h"
void _elfimplib_SetProcessWindowStation() asm("SetProcessWindowStation");
void *_imp__SetProcessWindowStation = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessWindowStation() {
load_dll_user32();
_imp__SetProcessWindowStation = (void *) _elf_GetProcAddress(_dll_user32, "SetProcessWindowStation");
}
void _elfimplib_SetProcessWindowStation() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessWindowStation));
}

