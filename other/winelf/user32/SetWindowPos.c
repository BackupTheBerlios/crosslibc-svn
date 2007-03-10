#include "user32.h"
void _elfimplib_SetWindowPos() asm("SetWindowPos");
void *_imp__SetWindowPos = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowPos() {
load_dll_user32();
_imp__SetWindowPos = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowPos");
}
void _elfimplib_SetWindowPos() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowPos));
}

