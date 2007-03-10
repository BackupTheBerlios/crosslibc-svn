#include "msvcrt.h"
void _elfimplib__XcptFilter() asm("XcptFilter");
void *_imp___XcptFilter = NULL;
__attribute__((constructor)) void _elfimplib_init__XcptFilter() {
load_dll_msvcrt();
_imp___XcptFilter = (void *) _elf_GetProcAddress(_dll_msvcrt, "_XcptFilter");
}
void _elfimplib__XcptFilter() {
asm("leave\njmp *%0" : : "r"(_imp___XcptFilter));
}

void _elfimplibmang__XcptFilter() asm("_XcptFilter");
void _elfimplibmang__XcptFilter() {
asm("leave\njmp *%0" : : "r"(_imp___XcptFilter));
}

