#include "msvcrt.h"
void _elfimplib__wexecvp() asm("wexecvp");
void *_imp___wexecvp = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecvp() {
load_dll_msvcrt();
_imp___wexecvp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecvp");
}
void _elfimplib__wexecvp() {
asm("leave\njmp *%0" : : "r"(_imp___wexecvp));
}

void _elfimplibmang__wexecvp() asm("_wexecvp");
void _elfimplibmang__wexecvp() {
asm("leave\njmp *%0" : : "r"(_imp___wexecvp));
}

