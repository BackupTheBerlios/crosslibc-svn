#include "user32.h"
void _elfimplib_DdeDisconnect() asm("DdeDisconnect");
void *_imp__DdeDisconnect = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeDisconnect() {
load_dll_user32();
_imp__DdeDisconnect = (void *) _elf_GetProcAddress(_dll_user32, "DdeDisconnect");
}
void _elfimplib_DdeDisconnect() {
asm("leave\njmp *%0" : : "r"(_imp__DdeDisconnect));
}

