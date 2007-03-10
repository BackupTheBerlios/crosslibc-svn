#include "user32.h"
void _elfimplib_DrawIcon() asm("DrawIcon");
void *_imp__DrawIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_DrawIcon() {
load_dll_user32();
_imp__DrawIcon = (void *) _elf_GetProcAddress(_dll_user32, "DrawIcon");
}
void _elfimplib_DrawIcon() {
asm("leave\njmp *%0" : : "r"(_imp__DrawIcon));
}

