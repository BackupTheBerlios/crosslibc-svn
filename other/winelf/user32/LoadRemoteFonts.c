#include "user32.h"
void _elfimplib_LoadRemoteFonts() asm("LoadRemoteFonts");
void *_imp__LoadRemoteFonts = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadRemoteFonts() {
load_dll_user32();
_imp__LoadRemoteFonts = (void *) _elf_GetProcAddress(_dll_user32, "LoadRemoteFonts");
}
void _elfimplib_LoadRemoteFonts() {
asm("leave\njmp *%0" : : "r"(_imp__LoadRemoteFonts));
}

