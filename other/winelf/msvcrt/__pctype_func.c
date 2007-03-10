#include "msvcrt.h"
void _elfimplib___pctype_func() asm("_pctype_func");
void *_imp____pctype_func = NULL;
__attribute__((constructor)) void _elfimplib_init___pctype_func() {
load_dll_msvcrt();
_imp____pctype_func = (void *) _elf_GetProcAddress(_dll_msvcrt, "__pctype_func");
}
void _elfimplib___pctype_func() {
asm("leave\njmp *%0" : : "r"(_imp____pctype_func));
}

void _elfimplibmang___pctype_func() asm("__pctype_func");
void _elfimplibmang___pctype_func() {
asm("leave\njmp *%0" : : "r"(_imp____pctype_func));
}

