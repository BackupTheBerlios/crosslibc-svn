#include "posix.h"
void _elfimplib_read() asm("UWIN_read");
void *_imp__read = NULL;
__attribute__((constructor)) void _elfimplib_init_read() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__read = (void *) _elf_GetProcAddress(_dll_posix, "read");
}
void _elfimplib_read() {
asm("leave\njmp *%0" : : "r"(_imp__read));
}

