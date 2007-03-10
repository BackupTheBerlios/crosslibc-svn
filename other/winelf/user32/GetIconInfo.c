#include "user32.h"
void _elfimplib_GetIconInfo() asm("GetIconInfo");
void *_imp__GetIconInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetIconInfo() {
load_dll_user32();
_imp__GetIconInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetIconInfo");
}
void _elfimplib_GetIconInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetIconInfo));
}

