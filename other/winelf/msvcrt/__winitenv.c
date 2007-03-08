#include "msvcrt.h"
void _elfimplib___winitenv() asm("_winitenv");
void *_imp____winitenv = NULL;
__attribute__((constructor)) void _elfimplib_init___winitenv() {
load_dll_msvcrt();
_imp____winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__winitenv");
}
void _elfimplib___winitenv() {
asm("leave\njmp *%0" : : "r"(_imp____winitenv));
}

