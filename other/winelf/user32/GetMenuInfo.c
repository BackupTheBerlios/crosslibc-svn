#include "user32.h"
void _elfimplib_GetMenuInfo() asm("GetMenuInfo");
void *_imp__GetMenuInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMenuInfo() {
load_dll_user32();
_imp__GetMenuInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetMenuInfo");
}
void _elfimplib_GetMenuInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetMenuInfo));
}

