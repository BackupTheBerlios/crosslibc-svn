#include "msvcrt.h"
void _elfimplib__mbctombb() asm("mbctombb");
void *_imp___mbctombb = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctombb() {
load_dll_msvcrt();
_imp___mbctombb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctombb");
}
void _elfimplib__mbctombb() {
asm("leave\njmp *%0" : : "r"(_imp___mbctombb));
}

