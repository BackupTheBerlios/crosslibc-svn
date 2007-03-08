#include "msvcrt.h"
void _elfimplib__ecvt() asm("ecvt");
void *_imp___ecvt = NULL;
__attribute__((constructor)) void _elfimplib_init__ecvt() {
load_dll_msvcrt();
_imp___ecvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ecvt");
}
void _elfimplib__ecvt() {
asm("leave\njmp *%0" : : "r"(_imp___ecvt));
}

