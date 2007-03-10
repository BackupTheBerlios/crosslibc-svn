#include "msvcrt.h"
void _elfimplib__getdrives() asm("getdrives");
void *_imp___getdrives = NULL;
__attribute__((constructor)) void _elfimplib_init__getdrives() {
load_dll_msvcrt();
_imp___getdrives = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrives");
}
void _elfimplib__getdrives() {
asm("leave\njmp *%0" : : "r"(_imp___getdrives));
}

void _elfimplibmang__getdrives() asm("_getdrives");
void _elfimplibmang__getdrives() {
asm("leave\njmp *%0" : : "r"(_imp___getdrives));
}

