#include "posix.h"
void _elfimplib_write() asm("UWIN_write");
void *_imp__write = NULL;
__attribute__((constructor)) void _elfimplib_init_write() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__write = (void *) _elf_GetProcAddress(_dll_posix, "write");
}
void _elfimplib_write() {
asm("leave\njmp *%0" : : "r"(_imp__write));
}

