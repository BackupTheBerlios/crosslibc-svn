#include "msvcrt.h"
void _elfimplib__wfindnexti64() asm("wfindnexti64");
void *_imp___wfindnexti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnexti64() {
load_dll_msvcrt();
_imp___wfindnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnexti64");
}
void _elfimplib__wfindnexti64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnexti64));
}

