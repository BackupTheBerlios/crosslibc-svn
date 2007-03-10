#include "user32.h"
void _elfimplib_GetClipboardFormatNameA() asm("GetClipboardFormatNameA");
void *_imp__GetClipboardFormatNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardFormatNameA() {
load_dll_user32();
_imp__GetClipboardFormatNameA = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardFormatNameA");
}
void _elfimplib_GetClipboardFormatNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardFormatNameA));
}

