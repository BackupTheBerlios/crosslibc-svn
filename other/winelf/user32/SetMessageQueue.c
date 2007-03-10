#include "user32.h"
void _elfimplib_SetMessageQueue() asm("SetMessageQueue");
void *_imp__SetMessageQueue = NULL;
__attribute__((constructor)) void _elfimplib_init_SetMessageQueue() {
load_dll_user32();
_imp__SetMessageQueue = (void *) _elf_GetProcAddress(_dll_user32, "SetMessageQueue");
}
void _elfimplib_SetMessageQueue() {
asm("leave\njmp *%0" : : "r"(_imp__SetMessageQueue));
}

