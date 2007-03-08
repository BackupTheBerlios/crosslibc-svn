#include "msvcrt.h"
void _elfimplib__mbctohira() asm("mbctohira");
void *_imp___mbctohira = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctohira() {
load_dll_msvcrt();
_imp___mbctohira = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctohira");
}
void _elfimplib__mbctohira() {
asm("leave\njmp *%0" : : "r"(_imp___mbctohira));
}

