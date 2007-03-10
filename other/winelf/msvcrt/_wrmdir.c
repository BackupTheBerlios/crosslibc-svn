#include "msvcrt.h"
void _elfimplib__wrmdir() asm("wrmdir");
void *_imp___wrmdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wrmdir() {
load_dll_msvcrt();
_imp___wrmdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrmdir");
}
void _elfimplib__wrmdir() {
asm("leave\njmp *%0" : : "r"(_imp___wrmdir));
}

void _elfimplibmang__wrmdir() asm("_wrmdir");
void _elfimplibmang__wrmdir() {
asm("leave\njmp *%0" : : "r"(_imp___wrmdir));
}

