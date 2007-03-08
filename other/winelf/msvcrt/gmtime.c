#include "msvcrt.h"
void _elfimplib_gmtime() asm("gmtime");
void *_imp__gmtime = NULL;
__attribute__((constructor)) void _elfimplib_init_gmtime() {
load_dll_msvcrt();
_imp__gmtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "gmtime");
}
void _elfimplib_gmtime() {
asm("leave\njmp *%0" : : "r"(_imp__gmtime));
}

