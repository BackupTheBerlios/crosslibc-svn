#include "msvcrt.h"
void _elfimplib__inp() asm("inp");
void *_imp___inp = NULL;
__attribute__((constructor)) void _elfimplib_init__inp() {
load_dll_msvcrt();
_imp___inp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inp");
}
void _elfimplib__inp() {
asm("leave\njmp *%0" : : "r"(_imp___inp));
}

