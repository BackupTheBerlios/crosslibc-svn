#include "msvcrt.h"
void _elfimplib__wstrtime() asm("wstrtime");
void *_imp___wstrtime = NULL;
__attribute__((constructor)) void _elfimplib_init__wstrtime() {
load_dll_msvcrt();
_imp___wstrtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wstrtime");
}
void _elfimplib__wstrtime() {
asm("leave\njmp *%0" : : "r"(_imp___wstrtime));
}

void _elfimplibmang__wstrtime() asm("_wstrtime");
void _elfimplibmang__wstrtime() {
asm("leave\njmp *%0" : : "r"(_imp___wstrtime));
}

