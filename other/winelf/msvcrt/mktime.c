#include "msvcrt.h"
void _elfimplib_mktime() asm("mktime");
void *_imp__mktime = NULL;
__attribute__((constructor)) void _elfimplib_init_mktime() {
load_dll_msvcrt();
_imp__mktime = (void *) _elf_GetProcAddress(_dll_msvcrt, "mktime");
}
void _elfimplib_mktime() {
asm("leave\njmp *%0" : : "r"(_imp__mktime));
}

