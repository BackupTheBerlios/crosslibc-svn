#include "msvcrt.h"
void _elfimplib__wfdopen() asm("wfdopen");
void *_imp___wfdopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfdopen() {
load_dll_msvcrt();
_imp___wfdopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfdopen");
}
void _elfimplib__wfdopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfdopen));
}

