#include "user32.h"
void _elfimplib_GetAsyncKeyState() asm("GetAsyncKeyState");
void *_imp__GetAsyncKeyState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAsyncKeyState() {
load_dll_user32();
_imp__GetAsyncKeyState = (void *) _elf_GetProcAddress(_dll_user32, "GetAsyncKeyState");
}
void _elfimplib_GetAsyncKeyState() {
asm("leave\njmp *%0" : : "r"(_imp__GetAsyncKeyState));
}

