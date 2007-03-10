#include "user32.h"
void _elfimplib_InSendMessageEx() asm("InSendMessageEx");
void *_imp__InSendMessageEx = NULL;
__attribute__((constructor)) void _elfimplib_init_InSendMessageEx() {
load_dll_user32();
_imp__InSendMessageEx = (void *) _elf_GetProcAddress(_dll_user32, "InSendMessageEx");
}
void _elfimplib_InSendMessageEx() {
asm("leave\njmp *%0" : : "r"(_imp__InSendMessageEx));
}

