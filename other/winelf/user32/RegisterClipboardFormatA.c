#include "user32.h"
void _elfimplib_RegisterClipboardFormatA() asm("RegisterClipboardFormatA");
void *_imp__RegisterClipboardFormatA = NULL;
__attribute__((constructor)) void _elfimplib_init_RegisterClipboardFormatA() {
load_dll_user32();
_imp__RegisterClipboardFormatA = (void *) _elf_GetProcAddress(_dll_user32, "RegisterClipboardFormatA");
}
void _elfimplib_RegisterClipboardFormatA() {
asm("leave\njmp *%0" : : "r"(_imp__RegisterClipboardFormatA));
}

