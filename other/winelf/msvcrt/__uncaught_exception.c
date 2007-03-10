#include "msvcrt.h"
void _elfimplib___uncaught_exception() asm("_uncaught_exception");
void *_imp____uncaught_exception = NULL;
__attribute__((constructor)) void _elfimplib_init___uncaught_exception() {
load_dll_msvcrt();
_imp____uncaught_exception = (void *) _elf_GetProcAddress(_dll_msvcrt, "__uncaught_exception");
}
void _elfimplib___uncaught_exception() {
asm("leave\njmp *%0" : : "r"(_imp____uncaught_exception));
}

void _elfimplibmang___uncaught_exception() asm("__uncaught_exception");
void _elfimplibmang___uncaught_exception() {
asm("leave\njmp *%0" : : "r"(_imp____uncaught_exception));
}

