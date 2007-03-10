#include "msvcrt.h"
void _elfimplib__mbsnextc() asm("mbsnextc");
void *_imp___mbsnextc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnextc() {
load_dll_msvcrt();
_imp___mbsnextc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnextc");
}
void _elfimplib__mbsnextc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnextc));
}

void _elfimplibmang__mbsnextc() asm("_mbsnextc");
void _elfimplibmang__mbsnextc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnextc));
}

