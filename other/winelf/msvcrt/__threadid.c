#include "msvcrt.h"
void _elfimplib___threadid() asm("_threadid");
void *_imp____threadid = NULL;
__attribute__((constructor)) void _elfimplib_init___threadid() {
load_dll_msvcrt();
_imp____threadid = (void *) _elf_GetProcAddress(_dll_msvcrt, "__threadid");
}
void _elfimplib___threadid() {
asm("leave\njmp *%0" : : "r"(_imp____threadid));
}

void _elfimplibmang___threadid() asm("__threadid");
void _elfimplibmang___threadid() {
asm("leave\njmp *%0" : : "r"(_imp____threadid));
}

