#include "msvcrt.h"
void _elfimplib__mbctoupper() asm("mbctoupper");
void *_imp___mbctoupper = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctoupper() {
load_dll_msvcrt();
_imp___mbctoupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctoupper");
}
void _elfimplib__mbctoupper() {
asm("leave\njmp *%0" : : "r"(_imp___mbctoupper));
}

void _elfimplibmang__mbctoupper() asm("_mbctoupper");
void _elfimplibmang__mbctoupper() {
asm("leave\njmp *%0" : : "r"(_imp___mbctoupper));
}

