#include "posix.h"
void _elfimplib_close() asm("UWIN_close");
void *_imp__close = NULL;
__attribute__((constructor)) void _elfimplib_init_close() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__close = (void *) _elf_GetProcAddress(_dll_posix, "close");
}
void _elfimplib_close() {
asm("leave\njmp *%0" : : "r"(_imp__close));
}

