#include "msvcrt.h"
void _elfimplib__scprintf() asm("scprintf");
void *_imp___scprintf = NULL;
__attribute__((constructor)) void _elfimplib_init__scprintf() {
load_dll_msvcrt();
_imp___scprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_scprintf");
}
void _elfimplib__scprintf() {
asm("leave\njmp *%0" : : "r"(_imp___scprintf));
}

void _elfimplibmang__scprintf() asm("_scprintf");
void _elfimplibmang__scprintf() {
asm("leave\njmp *%0" : : "r"(_imp___scprintf));
}

