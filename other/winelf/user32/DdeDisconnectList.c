#include "user32.h"
void _elfimplib_DdeDisconnectList() asm("DdeDisconnectList");
void *_imp__DdeDisconnectList = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeDisconnectList() {
load_dll_user32();
_imp__DdeDisconnectList = (void *) _elf_GetProcAddress(_dll_user32, "DdeDisconnectList");
}
void _elfimplib_DdeDisconnectList() {
asm("leave\njmp *%0" : : "r"(_imp__DdeDisconnectList));
}

