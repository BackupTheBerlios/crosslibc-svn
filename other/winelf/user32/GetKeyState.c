#include "user32.h"
void _elfimplib_GetKeyState() asm("GetKeyState");
void *_imp__GetKeyState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetKeyState() {
load_dll_user32();
_imp__GetKeyState = (void *) _elf_GetProcAddress(_dll_user32, "GetKeyState");
}
void _elfimplib_GetKeyState() {
asm("leave\njmp *%0" : : "r"(_imp__GetKeyState));
}
