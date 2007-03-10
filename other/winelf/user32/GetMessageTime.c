#include "user32.h"
void _elfimplib_GetMessageTime() asm("GetMessageTime");
void *_imp__GetMessageTime = NULL;
__attribute__((constructor)) void _elfimplib_init_GetMessageTime() {
load_dll_user32();
_imp__GetMessageTime = (void *) _elf_GetProcAddress(_dll_user32, "GetMessageTime");
}
void _elfimplib_GetMessageTime() {
asm("leave\njmp *%0" : : "r"(_imp__GetMessageTime));
}

