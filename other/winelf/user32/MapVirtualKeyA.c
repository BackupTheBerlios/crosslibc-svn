#include "user32.h"
void _elfimplib_MapVirtualKeyA() asm("MapVirtualKeyA");
void *_imp__MapVirtualKeyA = NULL;
__attribute__((constructor)) void _elfimplib_init_MapVirtualKeyA() {
load_dll_user32();
_imp__MapVirtualKeyA = (void *) _elf_GetProcAddress(_dll_user32, "MapVirtualKeyA");
}
void _elfimplib_MapVirtualKeyA() {
asm("leave\njmp *%0" : : "r"(_imp__MapVirtualKeyA));
}

