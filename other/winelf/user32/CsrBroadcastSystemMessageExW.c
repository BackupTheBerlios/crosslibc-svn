#include "user32.h"
void _elfimplib_CsrBroadcastSystemMessageExW() asm("CsrBroadcastSystemMessageExW");
void *_imp__CsrBroadcastSystemMessageExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CsrBroadcastSystemMessageExW() {
load_dll_user32();
_imp__CsrBroadcastSystemMessageExW = (void *) _elf_GetProcAddress(_dll_user32, "CsrBroadcastSystemMessageExW");
}
void _elfimplib_CsrBroadcastSystemMessageExW() {
asm("leave\njmp *%0" : : "r"(_imp__CsrBroadcastSystemMessageExW));
}

