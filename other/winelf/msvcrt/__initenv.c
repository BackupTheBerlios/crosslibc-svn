#include "msvcrt.h"
void _elfimplib___initenv() asm("_initenv");
void *_imp____initenv = NULL;
__attribute__((constructor)) void _elfimplib_init___initenv() {
load_dll_msvcrt();
_imp____initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__initenv");
}
void _elfimplib___initenv() {
asm("leave\njmp *%0" : : "r"(_imp____initenv));
}

void _elfimplibmang___initenv() asm("__initenv");
void _elfimplibmang___initenv() {
asm("leave\njmp *%0" : : "r"(_imp____initenv));
}

