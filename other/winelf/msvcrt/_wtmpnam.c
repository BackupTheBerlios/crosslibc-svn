#include "msvcrt.h"
void _elfimplib__wtmpnam() asm("wtmpnam");
void *_imp___wtmpnam = NULL;
__attribute__((constructor)) void _elfimplib_init__wtmpnam() {
load_dll_msvcrt();
_imp___wtmpnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtmpnam");
}
void _elfimplib__wtmpnam() {
asm("leave\njmp *%0" : : "r"(_imp___wtmpnam));
}

