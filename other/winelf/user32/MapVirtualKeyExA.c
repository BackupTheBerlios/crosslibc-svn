#include "user32.h"
void _elfimplib_MapVirtualKeyExA() asm("MapVirtualKeyExA");
void *_imp__MapVirtualKeyExA = NULL;
__attribute__((constructor)) void _elfimplib_init_MapVirtualKeyExA() {
load_dll_user32();
_imp__MapVirtualKeyExA = (void *) _elf_GetProcAddress(_dll_user32, "MapVirtualKeyExA");
}
void _elfimplib_MapVirtualKeyExA() {
asm("leave\njmp *%0" : : "r"(_imp__MapVirtualKeyExA));
}

