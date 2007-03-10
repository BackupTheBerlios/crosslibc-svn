#include "user32.h"
void _elfimplib_EmptyClipboard() asm("EmptyClipboard");
void *_imp__EmptyClipboard = NULL;
__attribute__((constructor)) void _elfimplib_init_EmptyClipboard() {
load_dll_user32();
_imp__EmptyClipboard = (void *) _elf_GetProcAddress(_dll_user32, "EmptyClipboard");
}
void _elfimplib_EmptyClipboard() {
asm("leave\njmp *%0" : : "r"(_imp__EmptyClipboard));
}

