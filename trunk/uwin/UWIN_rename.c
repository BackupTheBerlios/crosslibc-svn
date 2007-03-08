#include "posix.h"
void _elfimplib_rename() asm("UWIN_rename");
void *_imp__rename = NULL;
__attribute__((constructor)) void _elfimplib_init_rename() {
if (OSCALL_which != 3) return;
load_dll_posix();
_imp__rename = (void *) _elf_GetProcAddress(_dll_posix, "rename");
}
void _elfimplib_rename() {
asm("leave\njmp *%0" : : "r"(_imp__rename));
}

