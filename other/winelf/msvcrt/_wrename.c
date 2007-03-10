#include "msvcrt.h"
void _elfimplib__wrename() asm("wrename");
void *_imp___wrename = NULL;
__attribute__((constructor)) void _elfimplib_init__wrename() {
load_dll_msvcrt();
_imp___wrename = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wrename");
}
void _elfimplib__wrename() {
asm("leave\njmp *%0" : : "r"(_imp___wrename));
}

void _elfimplibmang__wrename() asm("_wrename");
void _elfimplibmang__wrename() {
asm("leave\njmp *%0" : : "r"(_imp___wrename));
}

