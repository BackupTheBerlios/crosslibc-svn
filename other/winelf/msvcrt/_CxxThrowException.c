#include "msvcrt.h"
void _elfimplib__CxxThrowException() asm("CxxThrowException");
void *_imp___CxxThrowException = NULL;
__attribute__((constructor)) void _elfimplib_init__CxxThrowException() {
load_dll_msvcrt();
_imp___CxxThrowException = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CxxThrowException");
}
void _elfimplib__CxxThrowException() {
asm("leave\njmp *%0" : : "r"(_imp___CxxThrowException));
}

void _elfimplibmang__CxxThrowException() asm("_CxxThrowException");
void _elfimplibmang__CxxThrowException() {
asm("leave\njmp *%0" : : "r"(_imp___CxxThrowException));
}

