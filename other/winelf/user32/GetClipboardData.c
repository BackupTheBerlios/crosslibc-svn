#include "user32.h"
void _elfimplib_GetClipboardData() asm("GetClipboardData");
void *_imp__GetClipboardData = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardData() {
load_dll_user32();
_imp__GetClipboardData = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardData");
}
void _elfimplib_GetClipboardData() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardData));
}

