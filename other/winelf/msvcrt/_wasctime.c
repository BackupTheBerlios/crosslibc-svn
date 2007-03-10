#include "msvcrt.h"
void _elfimplib__wasctime() asm("wasctime");
void *_imp___wasctime = NULL;
__attribute__((constructor)) void _elfimplib_init__wasctime() {
load_dll_msvcrt();
_imp___wasctime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wasctime");
}
void _elfimplib__wasctime() {
asm("leave\njmp *%0" : : "r"(_imp___wasctime));
}

void _elfimplibmang__wasctime() asm("_wasctime");
void _elfimplibmang__wasctime() {
asm("leave\njmp *%0" : : "r"(_imp___wasctime));
}

