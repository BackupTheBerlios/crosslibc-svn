#include "user32.h"
void _elfimplib_SendMessageTimeoutW() asm("SendMessageTimeoutW");
void *_imp__SendMessageTimeoutW = NULL;
__attribute__((constructor)) void _elfimplib_init_SendMessageTimeoutW() {
load_dll_user32();
_imp__SendMessageTimeoutW = (void *) _elf_GetProcAddress(_dll_user32, "SendMessageTimeoutW");
}
void _elfimplib_SendMessageTimeoutW() {
asm("leave\njmp *%0" : : "r"(_imp__SendMessageTimeoutW));
}

