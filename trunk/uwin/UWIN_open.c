#include "posix.h"
void _elfimplib_open() asm("UWIN_open");
void *_imp__open = NULL;
__attribute__((constructor)) void _elfimplib_init_open() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__open = (void *) _elf_GetProcAddress(_dll_posix, "open");
}
void _elfimplib_open() {
asm("leave\njmp *%0" : : "r"(_imp__open));
}

