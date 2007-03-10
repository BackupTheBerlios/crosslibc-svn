#include "msvcrt.h"
void _elfimplib__wexecv() asm("wexecv");
void *_imp___wexecv = NULL;
__attribute__((constructor)) void _elfimplib_init__wexecv() {
load_dll_msvcrt();
_imp___wexecv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wexecv");
}
void _elfimplib__wexecv() {
asm("leave\njmp *%0" : : "r"(_imp___wexecv));
}

void _elfimplibmang__wexecv() asm("_wexecv");
void _elfimplibmang__wexecv() {
asm("leave\njmp *%0" : : "r"(_imp___wexecv));
}

