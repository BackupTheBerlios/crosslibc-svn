#include "user32.h"
void _elfimplib_IsClipboardFormatAvailable() asm("IsClipboardFormatAvailable");
void *_imp__IsClipboardFormatAvailable = NULL;
__attribute__((constructor)) void _elfimplib_init_IsClipboardFormatAvailable() {
load_dll_user32();
_imp__IsClipboardFormatAvailable = (void *) _elf_GetProcAddress(_dll_user32, "IsClipboardFormatAvailable");
}
void _elfimplib_IsClipboardFormatAvailable() {
asm("leave\njmp *%0" : : "r"(_imp__IsClipboardFormatAvailable));
}

