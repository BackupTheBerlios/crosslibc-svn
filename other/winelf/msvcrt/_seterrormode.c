#include "msvcrt.h"
void _elfimplib__seterrormode() asm("seterrormode");
void *_imp___seterrormode = NULL;
__attribute__((constructor)) void _elfimplib_init__seterrormode() {
load_dll_msvcrt();
_imp___seterrormode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_seterrormode");
}
void _elfimplib__seterrormode() {
asm("leave\njmp *%0" : : "r"(_imp___seterrormode));
}

