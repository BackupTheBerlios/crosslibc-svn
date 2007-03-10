#include "msvcrt.h"
void _elfimplib__mbslwr() asm("mbslwr");
void *_imp___mbslwr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbslwr() {
load_dll_msvcrt();
_imp___mbslwr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbslwr");
}
void _elfimplib__mbslwr() {
asm("leave\njmp *%0" : : "r"(_imp___mbslwr));
}

void _elfimplibmang__mbslwr() asm("_mbslwr");
void _elfimplibmang__mbslwr() {
asm("leave\njmp *%0" : : "r"(_imp___mbslwr));
}

