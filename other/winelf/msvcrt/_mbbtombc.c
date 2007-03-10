#include "msvcrt.h"
void _elfimplib__mbbtombc() asm("mbbtombc");
void *_imp___mbbtombc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbbtombc() {
load_dll_msvcrt();
_imp___mbbtombc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbbtombc");
}
void _elfimplib__mbbtombc() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtombc));
}

void _elfimplibmang__mbbtombc() asm("_mbbtombc");
void _elfimplibmang__mbbtombc() {
asm("leave\njmp *%0" : : "r"(_imp___mbbtombc));
}

