#include "user32.h"
void _elfimplib_SetCapture() asm("SetCapture");
void *_imp__SetCapture = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCapture() {
load_dll_user32();
_imp__SetCapture = (void *) _elf_GetProcAddress(_dll_user32, "SetCapture");
}
void _elfimplib_SetCapture() {
asm("leave\njmp *%0" : : "r"(_imp__SetCapture));
}

