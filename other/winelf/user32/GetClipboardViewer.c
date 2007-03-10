#include "user32.h"
void _elfimplib_GetClipboardViewer() asm("GetClipboardViewer");
void *_imp__GetClipboardViewer = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardViewer() {
load_dll_user32();
_imp__GetClipboardViewer = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardViewer");
}
void _elfimplib_GetClipboardViewer() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardViewer));
}

