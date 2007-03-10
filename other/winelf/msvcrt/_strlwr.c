#include "msvcrt.h"
void _elfimplib__strlwr() asm("strlwr");
void *_imp___strlwr = NULL;
__attribute__((constructor)) void _elfimplib_init__strlwr() {
load_dll_msvcrt();
_imp___strlwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strlwr");
}
void _elfimplib__strlwr() {
asm("leave\njmp *%0" : : "r"(_imp___strlwr));
}

void _elfimplibmang__strlwr() asm("_strlwr");
void _elfimplibmang__strlwr() {
asm("leave\njmp *%0" : : "r"(_imp___strlwr));
}

