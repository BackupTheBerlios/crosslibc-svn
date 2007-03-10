#include "user32.h"
void _elfimplib_OpenClipboard() asm("OpenClipboard");
void *_imp__OpenClipboard = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenClipboard() {
load_dll_user32();
_imp__OpenClipboard = (void *) _elf_GetProcAddress(_dll_user32, "OpenClipboard");
}
void _elfimplib_OpenClipboard() {
asm("leave\njmp *%0" : : "r"(_imp__OpenClipboard));
}

