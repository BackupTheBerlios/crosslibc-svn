#include "user32.h"
void _elfimplib_CopyRect() asm("CopyRect");
void *_imp__CopyRect = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyRect() {
load_dll_user32();
_imp__CopyRect = (void *) _elf_GetProcAddress(_dll_user32, "CopyRect");
}
void _elfimplib_CopyRect() {
asm("leave\njmp *%0" : : "r"(_imp__CopyRect));
}

