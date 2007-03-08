#include "msvcrt.h"
void _elfimplib_ctime() asm("ctime");
void *_imp__ctime = NULL;
__attribute__((constructor)) void _elfimplib_init_ctime() {
load_dll_msvcrt();
_imp__ctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "ctime");
}
void _elfimplib_ctime() {
asm("leave\njmp *%0" : : "r"(_imp__ctime));
}

