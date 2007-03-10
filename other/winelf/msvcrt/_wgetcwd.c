#include "msvcrt.h"
void _elfimplib__wgetcwd() asm("wgetcwd");
void *_imp___wgetcwd = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetcwd() {
load_dll_msvcrt();
_imp___wgetcwd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetcwd");
}
void _elfimplib__wgetcwd() {
asm("leave\njmp *%0" : : "r"(_imp___wgetcwd));
}

void _elfimplibmang__wgetcwd() asm("_wgetcwd");
void _elfimplibmang__wgetcwd() {
asm("leave\njmp *%0" : : "r"(_imp___wgetcwd));
}

