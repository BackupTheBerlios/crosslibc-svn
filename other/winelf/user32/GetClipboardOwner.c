#include "user32.h"
void _elfimplib_GetClipboardOwner() asm("GetClipboardOwner");
void *_imp__GetClipboardOwner = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardOwner() {
load_dll_user32();
_imp__GetClipboardOwner = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardOwner");
}
void _elfimplib_GetClipboardOwner() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardOwner));
}

