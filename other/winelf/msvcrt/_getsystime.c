#include "msvcrt.h"
void _elfimplib__getsystime() asm("getsystime");
void *_imp___getsystime = NULL;
__attribute__((constructor)) void _elfimplib_init__getsystime() {
load_dll_msvcrt();
_imp___getsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getsystime");
}
void _elfimplib__getsystime() {
asm("leave\njmp *%0" : : "r"(_imp___getsystime));
}

