#include "msvcrt.h"
void _elfimplib__gmtime64() asm("gmtime64");
void *_imp___gmtime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__gmtime64() {
load_dll_msvcrt();
_imp___gmtime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gmtime64");
}
void _elfimplib__gmtime64() {
asm("leave\njmp *%0" : : "r"(_imp___gmtime64));
}

void _elfimplibmang__gmtime64() asm("_gmtime64");
void _elfimplibmang__gmtime64() {
asm("leave\njmp *%0" : : "r"(_imp___gmtime64));
}

