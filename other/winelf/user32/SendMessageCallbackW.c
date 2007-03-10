#include "user32.h"
void _elfimplib_SendMessageCallbackW() asm("SendMessageCallbackW");
void *_imp__SendMessageCallbackW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageCallbackW() {
load_dll_user32();
_imp__SendMessageCallbackW = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageCallbackW");
}
void _elfimplib_SendMessageCallbackW() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageCallbackW));
}

