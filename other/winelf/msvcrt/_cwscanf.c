#include "msvcrt.h"
void _elfimplib__cwscanf() asm("cwscanf");
void *_imp___cwscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__cwscanf() {
load_dll_msvcrt();
_imp___cwscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwscanf");
}
void _elfimplib__cwscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cwscanf));
}

void _elfimplibmang__cwscanf() asm("_cwscanf");
void _elfimplibmang__cwscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cwscanf));
}

