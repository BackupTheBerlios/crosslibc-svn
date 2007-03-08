#include "posix.h"
void _elfimplib_unlink() asm("UWIN_unlink");
void *_imp__unlink = NULL;
__attribute__((constructor)) void _elfimplib_init_unlink() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__unlink = (void *) _elf_GetProcAddress(_dll_posix, "unlink");
}
void _elfimplib_unlink() {
asm("leave\njmp *%0" : : "r"(_imp__unlink));
}

