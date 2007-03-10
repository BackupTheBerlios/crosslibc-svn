#include "msvcrt.h"
void _elfimplib__wfsopen() asm("wfsopen");
void *_imp___wfsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wfsopen() {
load_dll_msvcrt();
_imp___wfsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wfsopen");
}
void _elfimplib__wfsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfsopen));
}

void _elfimplibmang__wfsopen() asm("_wfsopen");
void _elfimplibmang__wfsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wfsopen));
}

