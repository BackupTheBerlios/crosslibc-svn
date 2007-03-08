#include "msvcrt.h"
void _elfimplib__wtempnam() asm("wtempnam");
void *_imp___wtempnam = NULL;
__attribute__((constructor)) void _elfimplib_init__wtempnam() {
load_dll_msvcrt();
_imp___wtempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtempnam");
}
void _elfimplib__wtempnam() {
asm("leave\njmp *%0" : : "r"(_imp___wtempnam));
}

