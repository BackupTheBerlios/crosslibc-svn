#include "user32.h"
void _elfimplib_OpenIcon() asm("OpenIcon");
void *_imp__OpenIcon = NULL;
__attribute__((constructor)) void _elfimplib_init_OpenIcon() {
load_dll_user32();
_imp__OpenIcon = (void *) _elf_GetProcAddress(_dll_user32, "OpenIcon");
}
void _elfimplib_OpenIcon() {
asm("leave\njmp *%0" : : "r"(_imp__OpenIcon));
}

