#include "user32.h"
void _elfimplib_GetClipboardSequenceNumber() asm("GetClipboardSequenceNumber");
void *_imp__GetClipboardSequenceNumber = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardSequenceNumber() {
load_dll_user32();
_imp__GetClipboardSequenceNumber = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardSequenceNumber");
}
void _elfimplib_GetClipboardSequenceNumber() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardSequenceNumber));
}

