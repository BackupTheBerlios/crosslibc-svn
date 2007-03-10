#include "user32.h"
void _elfimplib_GetClipboardFormatNameW() asm("GetClipboardFormatNameW");
void *_imp__GetClipboardFormatNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetClipboardFormatNameW() {
load_dll_user32();
_imp__GetClipboardFormatNameW = (void *) _elf_GetProcAddress(_dll_user32, "GetClipboardFormatNameW");
}
void _elfimplib_GetClipboardFormatNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetClipboardFormatNameW));
}

