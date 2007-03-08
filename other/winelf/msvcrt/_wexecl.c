#include "msvcrt.h"
void _elfimplib__wexecl() asm("wexecl");
void *_imp___wexecl = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecl() {
load_dll_msvcrt();
_imp___wexecl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecl");
}
void _elfimplib__wexecl() {
asm("leave\njmp *%0" : : "r"(_imp___wexecl));
}

