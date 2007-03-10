#include "user32.h"
void _elfimplib_SetMenuInfo() asm("SetMenuInfo");
void *_imp__SetMenuInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMenuInfo() {
load_dll_user32();
_imp__SetMenuInfo = (void *) _elf_GetProcAddress(_dll_user32, "SetMenuInfo");
}
void _elfimplib_SetMenuInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetMenuInfo));
}

