#include "user32.h"
void _elfimplib_RegisterClipboardFormatW() asm("RegisterClipboardFormatW");
void *_imp__RegisterClipboardFormatW = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClipboardFormatW() {
load_dll_user32();
_imp__RegisterClipboardFormatW = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClipboardFormatW");
}
void _elfimplib_RegisterClipboardFormatW() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClipboardFormatW));
}

