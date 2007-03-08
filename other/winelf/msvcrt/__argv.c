#include "msvcrt.h"
void _elfimplib___argv() asm("_argv");
void *_imp____argv = NULL;
__attribute__((constructor)) void _elfimplib_init___argv() {
load_dll_msvcrt();
_imp____argv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__argv");
}
void _elfimplib___argv() {
asm("leave\njmp *%0" : : "r"(_imp____argv));
}

