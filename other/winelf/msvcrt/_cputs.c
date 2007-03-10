#include "msvcrt.h"
void _elfimplib__cputs() asm("cputs");
void *_imp___cputs = NULL;
__attribute__((constructor)) void _elfimplib_init__cputs() {
load_dll_msvcrt();
_imp___cputs = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cputs");
}
void _elfimplib__cputs() {
asm("leave\njmp *%0" : : "r"(_imp___cputs));
}

void _elfimplibmang__cputs() asm("_cputs");
void _elfimplibmang__cputs() {
asm("leave\njmp *%0" : : "r"(_imp___cputs));
}

