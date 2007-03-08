#include "msvcrt.h"
void _elfimplib___p__wcmdln() asm("_p__wcmdln");
void *_imp____p__wcmdln = NULL;
__attribute__((constructor)) void _elfimplib_init___p__wcmdln() {
load_dll_msvcrt();
_imp____p__wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__wcmdln");
}
void _elfimplib___p__wcmdln() {
asm("leave\njmp *%0" : : "r"(_imp____p__wcmdln));
}

