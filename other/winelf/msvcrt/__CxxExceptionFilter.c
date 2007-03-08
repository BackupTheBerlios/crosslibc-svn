#include "msvcrt.h"
void _elfimplib___CxxExceptionFilter() asm("_CxxExceptionFilter");
void *_imp____CxxExceptionFilter = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxExceptionFilter() {
load_dll_msvcrt();
_imp____CxxExceptionFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxExceptionFilter");
}
void _elfimplib___CxxExceptionFilter() {
asm("leave\njmp *%0" : : "r"(_imp____CxxExceptionFilter));
}

