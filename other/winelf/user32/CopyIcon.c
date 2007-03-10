#include "user32.h"
void _elfimplib_CopyIcon() asm("CopyIcon");
void *_imp__CopyIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyIcon() {
load_dll_user32();
_imp__CopyIcon = (void *) _elf_GetProcAddress(_dll_user32, "CopyIcon");
}
void _elfimplib_CopyIcon() {
asm("leave\njmp *%0" : : "r"(_imp__CopyIcon));
}

