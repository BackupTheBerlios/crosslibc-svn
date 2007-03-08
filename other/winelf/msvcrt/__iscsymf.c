#include "msvcrt.h"
void _elfimplib___iscsymf() asm("_iscsymf");
void *_imp____iscsymf = NULL;
__attribute__((constructor)) void _elfimplib_init___iscsymf() {
load_dll_msvcrt();
_imp____iscsymf = (void *) _elf_GetProcAddress(_dll_msvcrt, "__iscsymf");
}
void _elfimplib___iscsymf() {
asm("leave\njmp *%0" : : "r"(_imp____iscsymf));
}

