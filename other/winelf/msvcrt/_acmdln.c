#include "msvcrt.h"
void _elfimplib__acmdln() asm("acmdln");
void *_imp___acmdln = NULL;
__attribute__((constructor)) void _elfimplib_init__acmdln() {
load_dll_msvcrt();
_imp___acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_acmdln");
}
void _elfimplib__acmdln() {
asm("leave\njmp *%0" : : "r"(_imp___acmdln));
}

void _elfimplibmang__acmdln() asm("_acmdln");
void _elfimplibmang__acmdln() {
asm("leave\njmp *%0" : : "r"(_imp___acmdln));
}

