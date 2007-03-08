#include "msvcrt.h"
void _elfimplib___unDName() asm("_unDName");
void *_imp____unDName = NULL;
__attribute__((constructor)) void _elfimplib_init___unDName() {
load_dll_msvcrt();
_imp____unDName = (void *) _elf_GetProcAddress(_dll_msvcrt, "__unDName");
}
void _elfimplib___unDName() {
asm("leave\njmp *%0" : : "r"(_imp____unDName));
}

