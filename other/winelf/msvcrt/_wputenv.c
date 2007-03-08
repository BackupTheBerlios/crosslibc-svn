#include "msvcrt.h"
void _elfimplib__wputenv() asm("wputenv");
void *_imp___wputenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wputenv() {
load_dll_msvcrt();
_imp___wputenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wputenv");
}
void _elfimplib__wputenv() {
asm("leave\njmp *%0" : : "r"(_imp___wputenv));
}

