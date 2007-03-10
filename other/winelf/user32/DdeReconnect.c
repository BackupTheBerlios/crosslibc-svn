#include "user32.h"
void _elfimplib_DdeReconnect() asm("DdeReconnect");
void *_imp__DdeReconnect = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeReconnect() {
load_dll_user32();
_imp__DdeReconnect = (void *) _elf_GetProcAddress(_dll_user32, "DdeReconnect");
}
void _elfimplib_DdeReconnect() {
asm("leave\njmp *%0" : : "r"(_imp__DdeReconnect));
}

