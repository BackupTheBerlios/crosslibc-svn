#include "msvcrt.h"
void _elfimplib_rename() asm("rename");
void *_imp__rename = NULL;
__attribute__((constructor)) void _elfimplib_init_rename() {
load_dll_msvcrt();
_imp__rename = (void *) _elf_GetProcAddress(_dll_msvcrt, "rename");
}
void _elfimplib_rename() {
asm("leave\njmp *%0" : : "r"(_imp__rename));
}

