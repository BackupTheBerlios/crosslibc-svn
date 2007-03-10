#include "user32.h"
void _elfimplib_GetPriorityClipboardFormat() asm("GetPriorityClipboardFormat");
void *_imp__GetPriorityClipboardFormat = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPriorityClipboardFormat() {
load_dll_user32();
_imp__GetPriorityClipboardFormat = (void *) _elf_GetProcAddress(_dll_user32, "GetPriorityClipboardFormat");
}
void _elfimplib_GetPriorityClipboardFormat() {
asm("leave\njmp *%0" : : "r"(_imp__GetPriorityClipboardFormat));
}

