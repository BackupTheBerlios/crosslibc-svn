#include "msvcrt.h"
void _elfimplib__mbslen() asm("mbslen");
void *_imp___mbslen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbslen() {
load_dll_msvcrt();
_imp___mbslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslen");
}
void _elfimplib__mbslen() {
asm("leave\njmp *%0" : : "r"(_imp___mbslen));
}

void _elfimplibmang__mbslen() asm("_mbslen");
void _elfimplibmang__mbslen() {
asm("leave\njmp *%0" : : "r"(_imp___mbslen));
}

