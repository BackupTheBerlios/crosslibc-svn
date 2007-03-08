#include "posix.h"
void _elfimplib_brk() asm("UWIN_brk");
void *_imp__brk = NULL;
__attribute__((constructor)) void _elfimplib_init_brk() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__brk = (void *) _elf_GetProcAddress(_dll_posix, "brk");
}
void _elfimplib_brk() {
asm("leave\njmp *%0" : : "r"(_imp__brk));
}

