#include "msvcrt.h"
void _elfimplib__cscanf() asm("cscanf");
void *_imp___cscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__cscanf() {
load_dll_msvcrt();
_imp___cscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cscanf");
}
void _elfimplib__cscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cscanf));
}

void _elfimplibmang__cscanf() asm("_cscanf");
void _elfimplibmang__cscanf() {
asm("leave\njmp *%0" : : "r"(_imp___cscanf));
}

