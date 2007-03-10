#include "user32.h"
void _elfimplib_DdeConnectList() asm("DdeConnectList");
void *_imp__DdeConnectList = NULL;
__attribute__((constructor)) void _elfimplib_init_DdeConnectList() {
load_dll_user32();
_imp__DdeConnectList = (void *) _elf_GetProcAddress(_dll_user32, "DdeConnectList");
}
void _elfimplib_DdeConnectList() {
asm("leave\njmp *%0" : : "r"(_imp__DdeConnectList));
}

