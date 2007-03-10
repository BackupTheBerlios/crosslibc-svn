#include "user32.h"
void _elfimplib_GetCursorPos() asm("GetCursorPos");
void *_imp__GetCursorPos = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCursorPos() {
load_dll_user32();
_imp__GetCursorPos = (void *) _elf_GetProcAddress(_dll_user32, "GetCursorPos");
}
void _elfimplib_GetCursorPos() {
asm("leave\njmp *%0" : : "r"(_imp__GetCursorPos));
}

