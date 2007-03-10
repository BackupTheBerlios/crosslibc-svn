#include "user32.h"
void _elfimplib_BroadcastSystemMessageA() asm("BroadcastSystemMessageA");
void *_imp__BroadcastSystemMessageA = NULL;
__attribute__((constructor)) void _elfimplib_init_BroadcastSystemMessageA() {
load_dll_user32();
_imp__BroadcastSystemMessageA = (void *) _elf_GetProcAddress(_dll_user32, "BroadcastSystemMessageA");
}
void _elfimplib_BroadcastSystemMessageA() {
asm("leave\njmp *%0" : : "r"(_imp__BroadcastSystemMessageA));
}

