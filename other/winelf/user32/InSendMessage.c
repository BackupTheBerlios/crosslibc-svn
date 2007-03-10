#include "user32.h"
void _elfimplib_InSendMessage() asm("InSendMessage");
void *_imp__InSendMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_InSendMessage() {
load_dll_user32();
_imp__InSendMessage = (void *) _elf_GetProcAddress(_dll_user32, "InSendMessage");
}
void _elfimplib_InSendMessage() {
asm("leave\njmp *%0" : : "r"(_imp__InSendMessage));
}

