#include "msvcrt.h"
void _elfimplib__locking() asm("locking");
void *_imp___locking = NULL;
__attribute__((constructor)) void _elfimplib_init__locking() {
load_dll_msvcrt();
_imp___locking = (void *) _elf_GetProcAddress(_dll_msvcrt, "_locking");
}
void _elfimplib__locking() {
asm("leave\njmp *%0" : : "r"(_imp___locking));
}

