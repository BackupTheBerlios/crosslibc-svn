#include "user32.h"
void _elfimplib_ChangeClipboardChain() asm("ChangeClipboardChain");
void *_imp__ChangeClipboardChain = NULL;
__attribute__((constructor)) void _elfimplib_init_ChangeClipboardChain() {
load_dll_user32();
_imp__ChangeClipboardChain = (void *) _elf_GetProcAddress(_dll_user32, "ChangeClipboardChain");
}
void _elfimplib_ChangeClipboardChain() {
asm("leave\njmp *%0" : : "r"(_imp__ChangeClipboardChain));
}

