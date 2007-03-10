#include "msvcrt.h"
void _elfimplib___setusermatherr() asm("_setusermatherr");
void *_imp____setusermatherr = NULL;
__attribute__((constructor)) void _elfimplib_init___setusermatherr() {
load_dll_msvcrt();
_imp____setusermatherr = (void *) _elf_GetProcAddress(_dll_msvcrt, "__setusermatherr");
}
void _elfimplib___setusermatherr() {
asm("leave\njmp *%0" : : "r"(_imp____setusermatherr));
}

void _elfimplibmang___setusermatherr() asm("__setusermatherr");
void _elfimplibmang___setusermatherr() {
asm("leave\njmp *%0" : : "r"(_imp____setusermatherr));
}

