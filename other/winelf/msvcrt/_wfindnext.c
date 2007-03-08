#include "msvcrt.h"
void _elfimplib__wfindnext() asm("wfindnext");
void *_imp___wfindnext = NULL;
__attribute__((constructor)) void _elfimplib_init__wfindnext() {
load_dll_msvcrt();
_imp___wfindnext = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfindnext");
}
void _elfimplib__wfindnext() {
asm("leave\njmp *%0" : : "r"(_imp___wfindnext));
}

