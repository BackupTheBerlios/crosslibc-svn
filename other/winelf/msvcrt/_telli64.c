#include "msvcrt.h"
void _elfimplib__telli64() asm("telli64");
void *_imp___telli64 = NULL;
__attribute__((constructor)) void _elfimplib_init__telli64() {
load_dll_msvcrt();
_imp___telli64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_telli64");
}
void _elfimplib__telli64() {
asm("leave\njmp *%0" : : "r"(_imp___telli64));
}

void _elfimplibmang__telli64() asm("_telli64");
void _elfimplibmang__telli64() {
asm("leave\njmp *%0" : : "r"(_imp___telli64));
}

