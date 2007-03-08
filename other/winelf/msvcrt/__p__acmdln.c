#include "msvcrt.h"
void _elfimplib___p__acmdln() asm("_p__acmdln");
void *_imp____p__acmdln = NULL;
__attribute__((constructor)) void _elfimplib_init___p__acmdln() {
load_dll_msvcrt();
_imp____p__acmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__acmdln");
}
void _elfimplib___p__acmdln() {
asm("leave\njmp *%0" : : "r"(_imp____p__acmdln));
}

