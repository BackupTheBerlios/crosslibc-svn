#include "msvcrt.h"
void _elfimplib__ungetwch() asm("ungetwch");
void *_imp___ungetwch = NULL;
__attribute__((constructor)) void _elfimplib_init__ungetwch() {
load_dll_msvcrt();
_imp___ungetwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ungetwch");
}
void _elfimplib__ungetwch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetwch));
}

void _elfimplibmang__ungetwch() asm("_ungetwch");
void _elfimplibmang__ungetwch() {
asm("leave\njmp *%0" : : "r"(_imp___ungetwch));
}

