#include "user32.h"
void _elfimplib_MapVirtualKeyExW() asm("MapVirtualKeyExW");
void *_imp__MapVirtualKeyExW = NULL;
__attribute__((constructor)) void _elfimplib_init_MapVirtualKeyExW() {
load_dll_user32();
_imp__MapVirtualKeyExW = (void *) _elf_GetProcAddress(_dll_user32, "MapVirtualKeyExW");
}
void _elfimplib_MapVirtualKeyExW() {
asm("leave\njmp *%0" : : "r"(_imp__MapVirtualKeyExW));
}

