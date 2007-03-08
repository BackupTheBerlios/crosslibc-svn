#include "msvcrt.h"
void _elfimplib__getdrive() asm("getdrive");
void *_imp___getdrive = NULL;
__attribute__((constructor)) void _elfimplib_init__getdrive() {
load_dll_msvcrt();
_imp___getdrive = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getdrive");
}
void _elfimplib__getdrive() {
asm("leave\njmp *%0" : : "r"(_imp___getdrive));
}

