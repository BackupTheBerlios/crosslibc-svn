#include "msvcrt.h"
void _elfimplib__kbhit() asm("kbhit");
void *_imp___kbhit = NULL;
__attribute__((constructor)) void _elfimplib_init__kbhit() {
load_dll_msvcrt();
_imp___kbhit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_kbhit");
}
void _elfimplib__kbhit() {
asm("leave\njmp *%0" : : "r"(_imp___kbhit));
}

void _elfimplibmang__kbhit() asm("_kbhit");
void _elfimplibmang__kbhit() {
asm("leave\njmp *%0" : : "r"(_imp___kbhit));
}

