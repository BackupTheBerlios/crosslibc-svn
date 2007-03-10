#include "msvcrt.h"
void _elfimplib__aexit_rtn() asm("aexit_rtn");
void *_imp___aexit_rtn = NULL;
__attribute__((constructor)) void _elfimplib_init__aexit_rtn() {
load_dll_msvcrt();
_imp___aexit_rtn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aexit_rtn");
}
void _elfimplib__aexit_rtn() {
asm("leave\njmp *%0" : : "r"(_imp___aexit_rtn));
}

void _elfimplibmang__aexit_rtn() asm("_aexit_rtn");
void _elfimplibmang__aexit_rtn() {
asm("leave\njmp *%0" : : "r"(_imp___aexit_rtn));
}

