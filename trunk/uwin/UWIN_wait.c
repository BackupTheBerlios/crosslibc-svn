#include "posix.h"
void _elfimplib_wait() asm("UWIN_wait");
void *_imp__wait = NULL;
__attribute__((constructor)) void _elfimplib_init_wait() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__wait = (void *) _elf_GetProcAddress(_dll_posix, "wait");
}
void _elfimplib_wait() {
asm("leave\njmp *%0" : : "r"(_imp__wait));
}

