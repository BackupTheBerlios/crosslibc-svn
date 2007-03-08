#include "msvcrt.h"
void _elfimplib__wgetdcwd() asm("wgetdcwd");
void *_imp___wgetdcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetdcwd() {
load_dll_msvcrt();
_imp___wgetdcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetdcwd");
}
void _elfimplib__wgetdcwd() {
asm("leave\njmp *%0" : : "r"(_imp___wgetdcwd));
}

