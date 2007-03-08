#include "msvcrt.h"
void _elfimplib_localtime() asm("localtime");
void *_imp__localtime = NULL;
__attribute__((constructor)) void _elfimplib_init_localtime() {
load_dll_msvcrt();
_imp__localtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "localtime");
}
void _elfimplib_localtime() {
asm("leave\njmp *%0" : : "r"(_imp__localtime));
}

