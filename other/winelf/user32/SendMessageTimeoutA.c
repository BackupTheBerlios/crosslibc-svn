#include "user32.h"
void _elfimplib_SendMessageTimeoutA() asm("SendMessageTimeoutA");
void *_imp__SendMessageTimeoutA = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageTimeoutA() {
load_dll_user32();
_imp__SendMessageTimeoutA = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageTimeoutA");
}
void _elfimplib_SendMessageTimeoutA() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageTimeoutA));
}

