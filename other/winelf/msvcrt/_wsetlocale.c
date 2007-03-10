#include "msvcrt.h"
void _elfimplib__wsetlocale() asm("wsetlocale");
void *_imp___wsetlocale = NULL;
__attribute__((constructor)) void _elfimplib_init__wsetlocale() {
load_dll_msvcrt();
_imp___wsetlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsetlocale");
}
void _elfimplib__wsetlocale() {
asm("leave\njmp *%0" : : "r"(_imp___wsetlocale));
}

void _elfimplibmang__wsetlocale() asm("_wsetlocale");
void _elfimplibmang__wsetlocale() {
asm("leave\njmp *%0" : : "r"(_imp___wsetlocale));
}

