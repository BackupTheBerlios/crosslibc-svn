#include "msvcrt.h"
void _elfimplib__wchmod() asm("wchmod");
void *_imp___wchmod = NULL;
__attribute__((constructor)) void _elfimplib_init__wchmod() {
load_dll_msvcrt();
_imp___wchmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchmod");
}
void _elfimplib__wchmod() {
asm("leave\njmp *%0" : : "r"(_imp___wchmod));
}

void _elfimplibmang__wchmod() asm("_wchmod");
void _elfimplibmang__wchmod() {
asm("leave\njmp *%0" : : "r"(_imp___wchmod));
}

