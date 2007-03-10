#include "user32.h"
void _elfimplib_BroadcastSystemMessageExW() asm("BroadcastSystemMessageExW");
void *_imp__BroadcastSystemMessageExW = NULL;
__attribute__((constructor)) void _elfimplib_init_BroadcastSystemMessageExW() {
load_dll_user32();
_imp__BroadcastSystemMessageExW = (void *) _elf_GetProcAddress(_dll_user32, "BroadcastSystemMessageExW");
}
void _elfimplib_BroadcastSystemMessageExW() {
asm("leave\njmp *%0" : : "r"(_imp__BroadcastSystemMessageExW));
}

