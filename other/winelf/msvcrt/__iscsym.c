#include "msvcrt.h"
void _elfimplib___iscsym() asm("_iscsym");
void *_imp____iscsym = NULL;
__attribute__((constructor)) void _elfimplib_init___iscsym() {
load_dll_msvcrt();
_imp____iscsym = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsym");
}
void _elfimplib___iscsym() {
asm("leave\njmp *%0" : : "r"(_imp____iscsym));
}

