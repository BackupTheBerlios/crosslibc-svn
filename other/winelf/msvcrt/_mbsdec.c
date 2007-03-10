#include "msvcrt.h"
void _elfimplib__mbsdec() asm("mbsdec");
void *_imp___mbsdec = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsdec() {
load_dll_msvcrt();
_imp___mbsdec = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdec");
}
void _elfimplib__mbsdec() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdec));
}

void _elfimplibmang__mbsdec() asm("_mbsdec");
void _elfimplibmang__mbsdec() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdec));
}

