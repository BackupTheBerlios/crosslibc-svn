#include "msvcrt.h"
void _elfimplib__wopen() asm("wopen");
void *_imp___wopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wopen() {
load_dll_msvcrt();
_imp___wopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wopen");
}
void _elfimplib__wopen() {
asm("leave\njmp *%0" : : "r"(_imp___wopen));
}

void _elfimplibmang__wopen() asm("_wopen");
void _elfimplibmang__wopen() {
asm("leave\njmp *%0" : : "r"(_imp___wopen));
}

