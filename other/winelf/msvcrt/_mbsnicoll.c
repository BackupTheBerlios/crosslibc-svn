#include "msvcrt.h"
void _elfimplib__mbsnicoll() asm("mbsnicoll");
void *_imp___mbsnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnicoll() {
load_dll_msvcrt();
_imp___mbsnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicoll");
}
void _elfimplib__mbsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnicoll));
}

void _elfimplibmang__mbsnicoll() asm("_mbsnicoll");
void _elfimplibmang__mbsnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnicoll));
}

