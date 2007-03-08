#include "posix.h"
void _elfimplib_isatty() asm("UWIN_isatty");
void *_imp__isatty = NULL;
__attribute__((constructor)) void _elfimplib_init_isatty() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__isatty = (void *) _elf_GetProcAddress(_dll_posix, "isatty");
}
void _elfimplib_isatty() {
asm("leave\njmp *%0" : : "r"(_imp__isatty));
}

