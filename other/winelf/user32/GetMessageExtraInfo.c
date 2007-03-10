#include "user32.h"
void _elfimplib_GetMessageExtraInfo() asm("GetMessageExtraInfo");
void *_imp__GetMessageExtraInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMessageExtraInfo() {
load_dll_user32();
_imp__GetMessageExtraInfo = (void *) _elf_GetProcAddress(_dll_user32, "GetMessageExtraInfo");
}
void _elfimplib_GetMessageExtraInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetMessageExtraInfo));
}

