#include "msvcrt.h"
void _elfimplib__inpd() asm("inpd");
void *_imp___inpd = NULL;
__attribute__((constructor)) void _elfimplib_init__inpd() {
load_dll_msvcrt();
_imp___inpd = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpd");
}
void _elfimplib__inpd() {
asm("leave\njmp *%0" : : "r"(_imp___inpd));
}

void _elfimplibmang__inpd() asm("_inpd");
void _elfimplibmang__inpd() {
asm("leave\njmp *%0" : : "r"(_imp___inpd));
}

