#include "user32.h"
void _elfimplib_SendMessageCallbackA() asm("SendMessageCallbackA");
void *_imp__SendMessageCallbackA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageCallbackA() {
load_dll_user32();
_imp__SendMessageCallbackA = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageCallbackA");
}
void _elfimplib_SendMessageCallbackA() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageCallbackA));
}

