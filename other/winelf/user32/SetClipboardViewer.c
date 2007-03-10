#include "user32.h"
void _elfimplib_SetClipboardViewer() asm("SetClipboardViewer");
void *_imp__SetClipboardViewer = NULL;
__attribute__((constructor)) void _elfimplib_init_SetClipboardViewer() {
load_dll_user32();
_imp__SetClipboardViewer = (void *) _elf_GetProcAddress(_dll_user32, "SetClipboardViewer");
}
void _elfimplib_SetClipboardViewer() {
asm("leave\njmp *%0" : : "r"(_imp__SetClipboardViewer));
}

