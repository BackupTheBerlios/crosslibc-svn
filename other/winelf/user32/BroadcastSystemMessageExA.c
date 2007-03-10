#include "user32.h"
void _elfimplib_BroadcastSystemMessageExA() asm("BroadcastSystemMessageExA");
void *_imp__BroadcastSystemMessageExA = NULL;
__attribute__((constructor)) void _elfimplib_init_BroadcastSystemMessageExA() {
load_dll_user32();
_imp__BroadcastSystemMessageExA = (void *) _elf_GetProcAddress(_dll_user32, "BroadcastSystemMessageExA");
}
void _elfimplib_BroadcastSystemMessageExA() {
asm("leave\njmp *%0" : : "r"(_imp__BroadcastSystemMessageExA));
}

