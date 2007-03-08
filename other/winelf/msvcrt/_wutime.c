#include "msvcrt.h"
void _elfimplib__wutime() asm("wutime");
void *_imp___wutime = NULL;
__attribute__((constructor)) void _elfimplib_init__wutime() {
load_dll_msvcrt();
_imp___wutime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wutime");
}
void _elfimplib__wutime() {
asm("leave\njmp *%0" : : "r"(_imp___wutime));
}

