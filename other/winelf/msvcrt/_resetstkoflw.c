#include "msvcrt.h"
void _elfimplib__resetstkoflw() asm("resetstkoflw");
void *_imp___resetstkoflw = NULL;
__attribute__((constructor)) void _elfimplib_init__resetstkoflw() {
load_dll_msvcrt();
_imp___resetstkoflw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_resetstkoflw");
}
void _elfimplib__resetstkoflw() {
asm("leave\njmp *%0" : : "r"(_imp___resetstkoflw));
}

void _elfimplibmang__resetstkoflw() asm("_resetstkoflw");
void _elfimplibmang__resetstkoflw() {
asm("leave\njmp *%0" : : "r"(_imp___resetstkoflw));
}

