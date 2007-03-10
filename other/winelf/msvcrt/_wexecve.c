#include "msvcrt.h"
void _elfimplib__wexecve() asm("wexecve");
void *_imp___wexecve = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecve() {
load_dll_msvcrt();
_imp___wexecve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecve");
}
void _elfimplib__wexecve() {
asm("leave\njmp *%0" : : "r"(_imp___wexecve));
}

void _elfimplibmang__wexecve() asm("_wexecve");
void _elfimplibmang__wexecve() {
asm("leave\njmp *%0" : : "r"(_imp___wexecve));
}

