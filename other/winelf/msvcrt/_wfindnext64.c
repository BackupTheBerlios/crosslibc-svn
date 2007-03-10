#include "msvcrt.h"
void _elfimplib__wfindnext64() asm("wfindnext64");
void *_imp___wfindnext64 = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnext64() {
load_dll_msvcrt();
_imp___wfindnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext64");
}
void _elfimplib__wfindnext64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnext64));
}

void _elfimplibmang__wfindnext64() asm("_wfindnext64");
void _elfimplibmang__wfindnext64() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnext64));
}

