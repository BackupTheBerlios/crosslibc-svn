#include "msvcrt.h"
void _elfimplib__stricmp() asm("stricmp");
void *_imp___stricmp = NULL;
__attribute__((constructor)) void _elfimplib_init__stricmp() {
load_dll_msvcrt();
_imp___stricmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stricmp");
}
void _elfimplib__stricmp() {
asm("leave\njmp *%0" : : "r"(_imp___stricmp));
}

void _elfimplibmang__stricmp() asm("_stricmp");
void _elfimplibmang__stricmp() {
asm("leave\njmp *%0" : : "r"(_imp___stricmp));
}

