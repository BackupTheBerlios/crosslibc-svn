#include "user32.h"
void _elfimplib_InternalGetWindowText() asm("InternalGetWindowText");
void *_imp__InternalGetWindowText = NULL;
__attribute__((constructor)) void _elfimplib_init_InternalGetWindowText() {
load_dll_user32();
_imp__InternalGetWindowText = (void *) _elf_GetProcAddress(_dll_user32, "InternalGetWindowText");
}
void _elfimplib_InternalGetWindowText() {
asm("leave\njmp *%0" : : "r"(_imp__InternalGetWindowText));
}

