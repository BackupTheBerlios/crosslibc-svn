#include "msvcrt.h"
void _elfimplib___CxxQueryExceptionSize() asm("_CxxQueryExceptionSize");
void *_imp____CxxQueryExceptionSize = NULL;
__attribute__((constructor)) void _elfimplib_init___CxxQueryExceptionSize() {
load_dll_msvcrt();
_imp____CxxQueryExceptionSize = (void *) _elf_GetProcAddress(_dll_msvcrt, "__CxxQueryExceptionSize");
}
void _elfimplib___CxxQueryExceptionSize() {
asm("leave\njmp *%0" : : "r"(_imp____CxxQueryExceptionSize));
}

void _elfimplibmang___CxxQueryExceptionSize() asm("__CxxQueryExceptionSize");
void _elfimplibmang___CxxQueryExceptionSize() {
asm("leave\njmp *%0" : : "r"(_imp____CxxQueryExceptionSize));
}

