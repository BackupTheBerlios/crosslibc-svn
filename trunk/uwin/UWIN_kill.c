#include "posix.h"
void _elfimplib_kill() asm("UWIN_kill");
void *_imp__kill = NULL;
__attribute__((constructor)) void _elfimplib_init_kill() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__kill = (void *) _elf_GetProcAddress(_dll_posix, "kill");
}
void _elfimplib_kill() {
asm("leave\njmp *%0" : : "r"(_imp__kill));
}

