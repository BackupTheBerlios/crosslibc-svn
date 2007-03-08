#include "msvcrt.h"
void _elfimplib___threadhandle() asm("_threadhandle");
void *_imp____threadhandle = NULL;
__attribute__((constructor)) void _elfimplib_init___threadhandle() {
load_dll_msvcrt();
_imp____threadhandle = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadhandle");
}
void _elfimplib___threadhandle() {
asm("leave\njmp *%0" : : "r"(_imp____threadhandle));
}

