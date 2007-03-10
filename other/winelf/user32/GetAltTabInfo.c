#include "user32.h"
void _elfimplib_GetAltTabInfo() asm("GetAltTabInfo");
void *_imp__GetAltTabInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetAltTabInfo() {
load_dll_user32();
_imp__GetAltTabInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetAltTabInfo");
}
void _elfimplib_GetAltTabInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetAltTabInfo));
}

