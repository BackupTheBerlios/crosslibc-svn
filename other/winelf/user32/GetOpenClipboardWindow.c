#include "user32.h"
void _elfimplib_GetOpenClipboardWindow() asm("GetOpenClipboardWindow");
void *_imp__GetOpenClipboardWindow = NULL;
__attribute__((constructor)) void _elfimplib_init_GetOpenClipboardWindow() {
load_dll_user32();
_imp__GetOpenClipboardWindow = (void *) _elf_GetProcAddress(_dll_user32, "GetOpenClipboardWindow");
}
void _elfimplib_GetOpenClipboardWindow() {
asm("leave\njmp *%0" : : "r"(_imp__GetOpenClipboardWindow));
}

