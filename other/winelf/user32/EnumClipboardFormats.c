#include "user32.h"
void _elfimplib_EnumClipboardFormats() asm("EnumClipboardFormats");
void *_imp__EnumClipboardFormats = NULL;
__attribute__((constructor)) void _elfimplib_init_EnumClipboardFormats() {
load_dll_user32();
_imp__EnumClipboardFormats = (void *) _elf_GetProcAddress(_dll_user32, "EnumClipboardFormats");
}
void _elfimplib_EnumClipboardFormats() {
asm("leave\njmp *%0" : : "r"(_imp__EnumClipboardFormats));
}

