#include "user32.h"
void _elfimplib_CloseClipboard() asm("CloseClipboard");
void *_imp__CloseClipboard = NULL;
__attribute__((constructor)) void _elfimplib_init_CloseClipboard() {
load_dll_user32();
_imp__CloseClipboard = (void *) _elf_GetProcAddress(_dll_user32, "CloseClipboard");
}
void _elfimplib_CloseClipboard() {
asm("leave\njmp *%0" : : "r"(_imp__CloseClipboard));
}

