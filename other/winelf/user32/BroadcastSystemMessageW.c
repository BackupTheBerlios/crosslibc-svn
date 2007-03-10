#include "user32.h"
void _elfimplib_BroadcastSystemMessageW() asm("BroadcastSystemMessageW");
void *_imp__BroadcastSystemMessageW = NULL;
__attribute__((constructor)) void _elfimplib_init_BroadcastSystemMessageW() {
load_dll_user32();
_imp__BroadcastSystemMessageW = (void *) _elf_GetProcAddress(_dll_user32, "BroadcastSystemMessageW");
}
void _elfimplib_BroadcastSystemMessageW() {
asm("leave\njmp *%0" : : "r"(_imp__BroadcastSystemMessageW));
}

