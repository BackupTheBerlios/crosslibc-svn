#include "user32.h"
void _elfimplib_BroadcastSystemMessage() asm("BroadcastSystemMessage");
void *_imp__BroadcastSystemMessage = NULL;
__attribute__((constructor)) void _elfimplib_init_BroadcastSystemMessage() {
load_dll_user32();
_imp__BroadcastSystemMessage = (void *) _elf_GetProcAddress(_dll_user32, "BroadcastSystemMessage");
}
void _elfimplib_BroadcastSystemMessage() {
asm("leave\njmp *%0" : : "r"(_imp__BroadcastSystemMessage));
}

