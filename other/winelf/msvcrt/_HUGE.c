#include "msvcrt.h"
void _elfimplib__HUGE() asm("HUGE");
void *_imp___HUGE = NULL;
__attribute__((constructor)) void _elfimplib_init__HUGE() {
load_dll_msvcrt();
_imp___HUGE = (void *) _elf_GetProcAddress(_dll_msvcrt, "_HUGE");
}
void _elfimplib__HUGE() {
asm("leave\njmp *%0" : : "r"(_imp___HUGE));
}

void _elfimplibmang__HUGE() asm("_HUGE");
void _elfimplibmang__HUGE() {
asm("leave\njmp *%0" : : "r"(_imp___HUGE));
}

