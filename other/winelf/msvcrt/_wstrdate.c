#include "msvcrt.h"
void _elfimplib__wstrdate() asm("wstrdate");
void *_imp___wstrdate = NULL;
__attribute__((constructor)) void _elfimplib_init__wstrdate() {
load_dll_msvcrt();
_imp___wstrdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrdate");
}
void _elfimplib__wstrdate() {
asm("leave\njmp *%0" : : "r"(_imp___wstrdate));
}

