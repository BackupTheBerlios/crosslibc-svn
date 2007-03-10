#include "user32.h"
void _elfimplib_SetWindowWord() asm("SetWindowWord");
void *_imp__SetWindowWord = NULL;
__attribute__((constructor)) void _elfimplib_init_SetWindowWord() {
load_dll_user32();
_imp__SetWindowWord = (void *) _elf_GetProcAddress(_dll_user32, "SetWindowWord");
}
void _elfimplib_SetWindowWord() {
asm("leave\njmp *%0" : : "r"(_imp__SetWindowWord));
}

