#include "msvcrt.h"
void _elfimplib__strdate() asm("strdate");
void *_imp___strdate = NULL;
__attribute__((constructor)) void _elfimplib_init__strdate() {
load_dll_msvcrt();
_imp___strdate = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdate");
}
void _elfimplib__strdate() {
asm("leave\njmp *%0" : : "r"(_imp___strdate));
}

void _elfimplibmang__strdate() asm("_strdate");
void _elfimplibmang__strdate() {
asm("leave\njmp *%0" : : "r"(_imp___strdate));
}

