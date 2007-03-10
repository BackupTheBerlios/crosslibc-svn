#include "user32.h"
void _elfimplib_SetMessageExtraInfo() asm("SetMessageExtraInfo");
void *_imp__SetMessageExtraInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMessageExtraInfo() {
load_dll_user32();
_imp__SetMessageExtraInfo = (void *) _elf_GetProcAddress(_dll_user32, "SetMessageExtraInfo");
}
void _elfimplib_SetMessageExtraInfo() {
asm("leave\njmp *%0" : : "r"(_imp__SetMessageExtraInfo));
}

