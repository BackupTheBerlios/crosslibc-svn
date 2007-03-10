#include "user32.h"
void _elfimplib_MapVirtualKeyW() asm("MapVirtualKeyW");
void *_imp__MapVirtualKeyW = NULL;
__attribute__((constructor)) void _elfimplib_init_MapVirtualKeyW() {
load_dll_user32();
_imp__MapVirtualKeyW = (void *) _elf_GetProcAddress(_dll_user32, "MapVirtualKeyW");
}
void _elfimplib_MapVirtualKeyW() {
asm("leave\njmp *%0" : : "r"(_imp__MapVirtualKeyW));
}

